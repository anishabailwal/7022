#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class MusicLibrary
{
private:
    static const int MAX_SONGS = 100;
    string songs[MAX_SONGS];
    int numSongs = 0;

public:
    // Method to add a song to the library
    void addSong(const string &song)
    {
        if (numSongs < MAX_SONGS)
        {
            songs[numSongs++] = song;
            cout << "Song '" << song << "' added to the music library." << endl;
        }
        else
        {
            cout << "Music library is full. Cannot add more songs." << endl;
        }
    }

    // Method to remove a song from the library
    void removeSong(const string &song)
    {
        for (int i = 0; i < numSongs; ++i)
        {
            if (songs[i] == song)
            {
                for (int j = i; j < numSongs - 1; ++j)
                {
                    songs[j] = songs[j + 1];
                }
                numSongs--;
                cout << "Song '" << song << "' removed from the music library." << endl;
                return;
            }
        }
        cout << "Song '" << song << "' not found in the music library." << endl;
    }

    // Method to play a random song from the library
    void playRandomSong()
    {
        if (numSongs == 0)
        {
            cout << "No songs in the music library. Add some songs first." << endl;
            return;
        }

        srand(time(NULL));
        int index = rand() % numSongs;
        cout << "Playing random song: " << songs[index] << endl;
    }
};

int main()
{
    MusicLibrary library;

    char choice;
    do
    {
        cout << "\nChoose an option:\n";
        cout << "1. Add a song\n";
        cout << "2. Remove a song\n";
        cout << "3. Play a random song\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer

        switch (choice)
        {
        case '1':
        {
            string song;
            cout << "Enter the name of the song: ";
            getline(cin, song);
            library.addSong(song);
            break;
        }
        case '2':
        {
            string song;
            cout << "Enter the name of the song to remove: ";
            getline(cin, song);
            library.removeSong(song);
            break;
        }
        case '3':
            library.playRandomSong();
            break;
        case '4':
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}
