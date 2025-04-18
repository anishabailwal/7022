#include <iostream>
#include <string>
#include <cstdlib> // For system-specific functions
#include <thread>  // For this_thread::sleep_for
#include <chrono>  // For chrono literals

#ifdef _WIN32        // Check if the system is Windows
#include <windows.h> // For Sleep function
#else
#include <unistd.h> // For usleep function
#endif

class TrafficLight
{
private:
    std::string color;
    int duration; // in seconds

public:
    TrafficLight(std::string initialColor, int initialDuration)
    {
        color = initialColor;
        duration = initialDuration;
    }

    void setColor(std::string newColor)
    {
        color = newColor;
    }

    std::string getColor()
    {
        return color;
    }

    bool isRed()
    {
        return color == "red";
    }

    bool isGreen()
    {
        return color == "green";
    }

    void simulateTraffic()
    {
        while (true)
        {
            std::cout << "Traffic Light is " << color << std::endl;

// Use platform-specific sleep function
#ifdef _WIN32
            Sleep(duration * 1000); // Sleep in milliseconds on Windows
#else
            usleep(duration * 1000000); // Sleep in microseconds on Unix/Linux
#endif

            // Toggle color
            if (color == "red")
                color = "green";
            else
                color = "red";
        }
    }
};

int main()
{
    TrafficLight trafficLight("red", 5); // Initial color: red, Duration: 5 seconds
    trafficLight.simulateTraffic();
    return 0;
}
