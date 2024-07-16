#include <iostream>
#include <string>

using namespace std;

// Base class HOTEL
class HOTEL {
protected:
    string Hotel_name;
    string Hotel_type;
    string City;
    int Hotel_rate;

public:
    HOTEL() {}

    void setHotelInfo(string name, string type, string city, int rate) {
        Hotel_name = name;
        Hotel_type = type;
        City = city;
        Hotel_rate = rate;
    }

    void displayHotelInfo() {
        cout << "Hotel Name: " << Hotel_name << endl;
        cout << "Hotel Type: " << Hotel_type << endl;
        cout << "City: " << City << endl;
        cout << "Hotel Rate: " << Hotel_rate << endl;
    }
};

// Base class FLIGHT
class FLIGHT {
protected:
    string Flight_no;
    string Source_city;
    string Destination_city;
    int Seat_no;

public:
    FLIGHT() {}

    void setFlightInfo(string flightNo, string source, string destination, int seat) {
        Flight_no = flightNo;
        Source_city = source;
        Destination_city = destination;
        Seat_no = seat;
    }

    void displayFlightInfo() {
        cout << "Flight No: " << Flight_no << endl;
        cout << "Source City: " << Source_city << endl;
        cout << "Destination City: " << Destination_city << endl;
        cout << "Seat No: " << Seat_no << endl;
    }
};

// Sub class PASSENGER derived from HOTEL and FLIGHT
class PASSENGER : public HOTEL, public FLIGHT {
private:
    string Name;
    int Age;

public:
    PASSENGER() {}

    void setPassengerInfo(string name, int age, string hotelName, string hotelType, string city, int rate, string flightNo, string source, string destination, int seat) {
        Name = name;
        Age = age;
        setHotelInfo(hotelName, hotelType, city, rate);
        setFlightInfo(flightNo, source, destination, seat);
    }

    void displayPassengerInfo() {
        cout << "Passenger Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        displayHotelInfo();
        displayFlightInfo();
    }
};

int main() {
    PASSENGER passenger;
    passenger.setPassengerInfo("John Doe", 35, "Grand Hotel", "Five Star", "New York", 5000, "ABC123", "New York", "Los Angeles", 25);
    passenger.displayPassengerInfo();

    return 0;
}
