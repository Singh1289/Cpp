#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    string street;
    string city;
    string state;
    string pinCode;

public:
    // Constructors
    Address() {}
    Address(string street, string city, string state, string zipCode)
        : street(street), city(city), state(state), pinCode(pinCode) {}

    // Setters
    void setStreet(const string& street) {
        this->street = street;
    }

    void setCity(const string& city) {
        this->city = city;
    }

    void setState(const string& state) {
        this->state = state;
    }

    void setZipCode(const string& pinCode) {
        this->pinCode = pinCode;
    }

    // Getters
    string getStreet() const {
        return street;
    }

    string getCity() const {
        return city;
    }

    string getState() const {
        return state;
    }

    string getZipCode() const {
        return pinCode;
    }

    // Method to accept input for address
    void accept() {
        cout << "Enter Street: ";
        getline(cin, street);
        cout << "Enter City: ";
        getline(cin, city);
        cout << "Enter State: ";
        getline(cin, state);
        cout << "Enter Pin Code: ";
        getline(cin, pinCode);
    }

    // Method to display address
    void display() const {
        cout << "Street: " << street << endl;
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Pin Code: " << pinCode << endl;
    }
};

int main() {
    // Example usage
    Address address1;
    address1.accept(); // Input address details
    address1.display(); // Display address details

    return 0;
}
