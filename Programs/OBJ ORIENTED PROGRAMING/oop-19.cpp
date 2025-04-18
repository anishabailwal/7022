#include <iostream>
#include <string>

using namespace std;

class Flight {
private:
    string origin;
    string destination;
    string date;
    int capacity;
    int booked;

public:
    Flight() : origin(""), destination(""), date(""), capacity(0), booked(0) {}

    Flight(string _origin, string _destination, string _date, int _capacity) : origin(_origin), destination(_destination), date(_date), capacity(_capacity), booked(0) {}

    bool book() {
        if (booked < capacity) {
            booked++;
            return true;
        }
        return false;
    }

    bool cancel() {
        if (booked > 0) {
            booked--;
            return true;
        }
        return false;
    }

    string getOrigin() const { return origin; }
    string getDestination() const { return destination; }
    string getDate() const { return date; }
    int getCapacity() const { return capacity; }
    int getBooked() const { return booked; }
};

class Hotel {
private:
    string name;
    string city;
    int capacity;
    int booked;

public:
    Hotel() : name(""), city(""), capacity(0), booked(0) {}

    Hotel(string _name, string _city, int _capacity) : name(_name), city(_city), capacity(_capacity), booked(0) {}

    bool book() {
        if (booked < capacity) {
            booked++;
            return true;
        }
        return false;
    }

    bool cancel() {
        if (booked > 0) {
            booked--;
            return true;
        }
        return false;
    }

    string getName() const { return name; }
    string getCity() const { return city; }
    int getCapacity() const { return capacity; }
    int getBooked() const { return booked; }
};

class TravelAgency {
private:
    static const int MAX_FLIGHTS = 100;
    static const int MAX_HOTELS = 100;
    Flight flights[MAX_FLIGHTS];
    Hotel hotels[MAX_HOTELS];
    int flightCount;
    int hotelCount;

public:
    TravelAgency() : flightCount(0), hotelCount(0) {}

    void addFlight(const Flight& flight) {
        if (flightCount < MAX_FLIGHTS) {
            flights[flightCount++] = flight;
        }
    }

    void addHotel(const Hotel& hotel) {
        if (hotelCount < MAX_HOTELS) {
            hotels[hotelCount++] = hotel;
        }
    }

    Flight* searchFlights(string origin, string destination, string date) const {
        Flight* availableFlights = new Flight[MAX_FLIGHTS];
        int count = 0;
        for (int i = 0; i < flightCount; ++i) {
            if (flights[i].getOrigin() == origin && flights[i].getDestination() == destination && flights[i].getDate() == date && flights[i].getCapacity() > flights[i].getBooked()) {
                availableFlights[count++] = flights[i];
            }
        }
        return availableFlights;
    }

    Hotel* searchHotels(string city) const {
        Hotel* availableHotels = new Hotel[MAX_HOTELS];
        int count = 0;
        for (int i = 0; i < hotelCount; ++i) {
            if (hotels[i].getCity() == city && hotels[i].getCapacity() > hotels[i].getBooked()) {
                availableHotels[count++] = hotels[i];
            }
        }
        return availableHotels;
    }

    bool bookFlight(const Flight& flight) {
        for (int i = 0; i < flightCount; ++i) {
            if (flights[i].getOrigin() == flight.getOrigin() && flights[i].getDestination() == flight.getDestination() && flights[i].getDate() == flight.getDate()) {
                return flights[i].book();
            }
        }
        return false;
    }

    bool cancelFlight(const Flight& flight) {
        for (int i = 0; i < flightCount; ++i) {
            if (flights[i].getOrigin() == flight.getOrigin() && flights[i].getDestination() == flight.getDestination() && flights[i].getDate() == flight.getDate()) {
                return flights[i].cancel();
            }
        }
        return false;
    }

    bool bookHotel(const Hotel& hotel) {
        for (int i = 0; i < hotelCount; ++i) {
            if (hotels[i].getName() == hotel.getName() && hotels[i].getCity() == hotel.getCity()) {
                return hotels[i].book();
            }
        }
        return false;
    }

    bool cancelHotel(const Hotel& hotel) {
        for (int i = 0; i < hotelCount; ++i) {
            if (hotels[i].getName() == hotel.getName() && hotels[i].getCity() == hotel.getCity()) {
                return hotels[i].cancel();
            }
        }
        return false;
    }
};

int main() {
    TravelAgency travelAgency;

    Flight flight1("New York", "London", "2024-04-01", 200);
    Flight flight2("London", "Paris", "2024-04-02", 150);
    travelAgency.addFlight(flight1);
    travelAgency.addFlight(flight2);

    Hotel hotel1("Hilton", "London", 100);
    Hotel hotel2("Marriott", "Paris", 80);
    travelAgency.addHotel(hotel1);
    travelAgency.addHotel(hotel2);

    int choice;
    while (true) {
        cout << "\n1. Search for flights\n2. Book a flight\n3. Cancel a flight\n4. Search for hotels\n5. Book a hotel\n6. Cancel a hotel\n7. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string origin, destination, date;
                cout << "Enter origin: ";
                cin >> origin;
                cout << "Enter destination: ";
                cin >> destination;
                cout << "Enter date (YYYY-MM-DD): ";
                cin >> date;
                Flight* availableFlights = travelAgency.searchFlights(origin, destination, date);
                cout << "Available flights:" << endl;
                for (int i = 0; availableFlights[i].getOrigin() != ""; ++i) {
                    cout << "Flight: " << availableFlights[i].getOrigin() << " to " << availableFlights[i].getDestination() << " on " << availableFlights[i].getDate() << endl;
                }
                delete[] availableFlights;
                break;
            }
            case 2: {
                string origin, destination, date;
                cout << "Enter origin: ";
                cin >> origin;
                cout << "Enter destination: ";
                cin >> destination;
                cout << "Enter date (YYYY-MM-DD): ";
                cin >> date;
                Flight flight(origin, destination, date, 0);
                if (travelAgency.bookFlight(flight)) {
                    cout << "Flight booked successfully!" << endl;
                } else {
                    cout << "Failed to book flight!" << endl;
                }
                break;
            }
            case 3: {
                string origin, destination, date;
                cout << "Enter origin: ";
                cin >> origin;
                cout << "Enter destination: ";
                cin >> destination;
                cout << "Enter date (YYYY-MM-DD): ";
                cin >> date;
                Flight flight(origin, destination, date, 0);
                if (travelAgency.cancelFlight(flight)) {
                    cout << "Flight canceled successfully!" << endl;
                } else {
                    cout << "Failed to cancel flight!" << endl;
                }
                break;
            }
            case 4: {
                string city;
                cout << "Enter city: ";
                cin >> city;
                Hotel* availableHotels = travelAgency.searchHotels(city);
                cout << "Available hotels:" << endl;
                for (int i = 0; availableHotels[i].getName() != ""; ++i) {
                    cout << "Hotel: " << availableHotels[i].getName() << " in " << availableHotels[i].getCity() << endl;
                }
                delete[] availableHotels;
                break;
            }
            case 5: {
                string name, city;
                cout << "Enter hotel name: ";
                cin >> name;
                cout << "Enter city: ";
                cin >> city;
                Hotel hotel(name, city, 0);
                if (travelAgency.bookHotel(hotel)) {
                    cout << "Hotel booked successfully!" << endl;
                } else {
                    cout << "Failed to book hotel!" << endl;
                }
                break;
            }
            case 6: {
                string name, city;
                cout << "Enter hotel name: ";
                cin >> name;
                cout << "Enter city: ";
                cin >> city;
                Hotel hotel(name, city, 0);
                if (travelAgency.cancelHotel(hotel)) {
                    cout << "Hotel canceled successfully!" << endl;
                } else {
                    cout << "Failed to cancel hotel!" << endl;
                }
                break;
            }
            case 7:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
