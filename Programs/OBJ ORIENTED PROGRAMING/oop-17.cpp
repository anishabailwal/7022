#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string title;
    string director;
    string* actors;
    pair<string, pair<int, string>>* ratings; // pair<user, pair<rating, review>>
    int actorsCount;
    int ratingsCount;
    static const int MAX_ACTORS = 10;

public:
    // Constructor
    Movie(string _title, string _director, string _actors[], int _actorsCount) : title(_title), director(_director), actorsCount(_actorsCount) {
        actors = new string[MAX_ACTORS];
        for (int i = 0; i < _actorsCount; ++i) {
            actors[i] = _actors[i];
        }
        ratings = nullptr;
        ratingsCount = 0;
    }

    // Destructor
    ~Movie() {
        delete[] actors;
        delete[] ratings;
    }

    // Method to add a rating and review by a user
    void addRating(string user) {
        int rating;
        string review;
        cout << "Enter your rating for the movie (1-5): ";
        cin >> rating;
        cout << "Enter your review for the movie: ";
        cin.ignore(); // Clear the input buffer
        getline(cin, review);
        // Allocate memory for new rating
        pair<string, pair<int, string>>* newRatings = new pair<string, pair<int, string>>[ratingsCount + 1];
        // Copy existing ratings to new array
        for (int i = 0; i < ratingsCount; ++i) {
            newRatings[i] = ratings[i];
        }
        // Add new rating
        newRatings[ratingsCount++] = make_pair(user, make_pair(rating, review));
        // Delete old ratings array
        delete[] ratings;
        // Point ratings to new array
        ratings = newRatings;
    }

    // Method to retrieve average rating
    double getAverageRating() {
        if (ratingsCount == 0) return 0.0;
        double total = 0.0;
        for (int i = 0; i < ratingsCount; ++i) {
            total += ratings[i].second.first;
        }
        return total / ratingsCount;
    }

    // Method to display movie information
    void displayMovieInfo() {
        cout << "Title: " << title << endl;
        cout << "Director: " << director << endl;
        cout << "Actors: ";
        for (int i = 0; i < actorsCount; ++i) {
            cout << actors[i] << ", ";
        }
        cout << endl;
        cout << "Average Rating: " << getAverageRating() << endl;
    }
};

int main() {
    // Sample usage
    string actors[] = {"Leonardo DiCaprio", "Joseph Gordon-Levitt", "Ellen Page"};
    Movie movie("Inception", "Christopher Nolan", actors, 3);

    // Asking the user for a rating and review
    movie.addRating("user1");

    // Displaying movie information
    movie.displayMovieInfo();

    return 0;
}
