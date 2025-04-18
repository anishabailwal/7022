#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Airplane
{
private:
    string flightNumber;
    string departureAirport;
    string destinationAirport;
    time_t departureTime;
    time_t arrivalTime;
    int capacity;
    int bookedSeats;

public:
    // Constructor
    Airplane(string flightNum, string depAirport, string destAirport, time_t depTime, time_t arrTime, int cap)
        : flightNumber(flightNum), departureAirport(depAirport), destinationAirport(destAirport),
          departureTime(depTime), arrivalTime(arrTime), capacity(cap), bookedSeats(0) {}

    // Method to check flight status
    void checkFlightStatus()
    {
        time_t currentTime = time(NULL);

        if (currentTime < departureTime)
        {
            cout << "Flight " << flightNumber << " from " << departureAirport << " to " << destinationAirport
                 << " is scheduled to depart on time." << endl;
        }
        else if (currentTime == departureTime)
        {
            cout << "Flight " << flightNumber << " from " << departureAirport << " to " << destinationAirport
                 << " is departing now." << endl;
        }
        else if (currentTime > departureTime && currentTime < arrivalTime)
        {
            cout << "Flight " << flightNumber << " from " << departureAirport << " to " << destinationAirport
                 << " is en route." << endl;
        }
        else
        {
            cout << "Flight " << flightNumber << " from " << departureAirport << " to " << destinationAirport
                 << " has already arrived." << endl;
        }
    }

    // Method to delay the flight
    void delayFlight(int minutes)
    {
        departureTime += minutes * 60; // Convert minutes to seconds and add to departure time
        arrivalTime += minutes * 60;   // Adjust arrival time accordingly
        cout << "Flight " << flightNumber << " from " << departureAirport << " to " << destinationAirport
             << " has been delayed by " << minutes << " minutes." << endl;
    }

    // Method to book a seat
    bool bookSeat()
    {
        if (bookedSeats < capacity)
        {
            bookedSeats++;
            cout << "Seat booked successfully for flight " << flightNumber << "." << endl;
            return true;
        }
        else
        {
            cout << "Sorry, no available seats left on flight " << flightNumber << "." << endl;
            return false;
        }
    }

    // Method to cancel a booking
    void cancelBooking()
    {
        if (bookedSeats > 0)
        {
            bookedSeats--;
            cout << "Booking canceled successfully for flight " << flightNumber << "." << endl;
        }
        else
        {
            cout << "No bookings to cancel for flight " << flightNumber << "." << endl;
        }
    }

    // Method to display flight details
    void displayFlightDetails()
    {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Departure Airport: " << departureAirport << endl;
        cout << "Destination Airport: " << destinationAirport << endl;
        cout << "Departure Time: " << ctime(&departureTime);
        cout << "Arrival Time: " << ctime(&arrivalTime);
        cout << "Capacity: " << capacity << endl;
        cout << "Booked Seats: " << bookedSeats << endl;
    }
};

int main()
{
    // Creating an Airplane object with flight details
    time_t currentTime = time(NULL);
    time_t departureTime = currentTime + 3600; // Departure time set to 1 hour from current time
    time_t arrivalTime = departureTime + 7200; // Arrival time set to 2 hours after departure
    Airplane flight("ABC123", "JFK", "LAX", departureTime, arrivalTime, 150);

    // Checking flight status
    flight.checkFlightStatus();

    // Booking a seat
    flight.bookSeat();

    // Delaying the flight by 30 minutes
    flight.delayFlight(30);

    // Canceling booking
    flight.cancelBooking();

    // Displaying flight details
    flight.displayFlightDetails();

    return 0;
}
