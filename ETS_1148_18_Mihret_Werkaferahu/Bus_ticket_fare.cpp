#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    float baggageweight;
    float baggagefare = 0;
    float totalfare;
    float TRIP_FARE;

    int seatno, age, student, destination;
    string city;

    cout << "Enter the available number of seats: ";    cin >> seatno;
        if (seatno<0)
    {
        cout << "Available number of seats can not be negative" << endl;
        return 0;
    }
    

    if (seatno == 0)
    {
        cout << "All seats are sold out" << endl;
        return 0;
    }

    // Destination selection
    cout << "\nDESTINATION SELECTION" << endl;

    cout << "Press 1 for Gondar - 800 birr" << endl;    cout << "Press 2 for Afar - 500 birr" << endl;
    cout << "Press 3 for Adama - 300 birr" << endl;
    cout << "Press 4 for Tuludimtu - 200 birr" << endl;
    cout << "Press 5 for Harar - 700 birr" << endl;

    cout << "\nEnter your destination choice: ";
    cin >> destination;

    // Assigns the corresponding city and fare based on the user's choice
    switch (destination)
    {
        case 1:
            city = "Gondar";
            TRIP_FARE = 800;
            break;

        case 2:
            city = "Afar";
            TRIP_FARE = 500;
            break;

        case 3:
            city = "Adama";
            TRIP_FARE = 300;
            break;

        case 4:
            city = "Tuludimtu";
            TRIP_FARE = 200;
            break;

        case 5:
            city = "Harar";
            TRIP_FARE = 700;
            break;

        default:
            cout << "Sorry, We don't travel to that destination." << endl;
            return 0;
    }

    // Baggage calculation
    cout << "\nEnter your baggage weight (in kg): ";
    cin >> baggageweight;
if (baggageweight < 0) {
    cout << "Invalid baggage weight";
    return 0;
}

// Charges 10 birr for each kg exceeding the 20 kg allowance
if (baggageweight > 20) {
    baggagefare = (baggageweight - 20) * 10;
}

    
    // Combines the destination fare and baggage charge
    totalfare = TRIP_FARE + baggagefare;

    // Passenger information
    cout << "Enter your age: ";
    cin >> age;
    if (age < 0) {
    cout << "Invalid age";
    return 0;
}

    cout << "Are you a student? (Enter 1 if you are a student, otherwise enter any other number): ";
    cin >> student;

    // Discount calculation
    // Multipliers represent the percentage of the fare the passenger pays
    if (age <= 12)
    {
        if (student == 1)
        {
            totalfare = totalfare * 0.2;
        }
        else
        {
            totalfare = totalfare * 0.5;
        }
    }
    else if (age > 60)
    {
        if (student == 1)
        {
            totalfare = totalfare * 0.45;
        }
        else
        {
            totalfare = totalfare * 0.75;
        }
    }
    else
    {
        if (student == 1)
        {
            totalfare = totalfare * 0.3;
        }
    }

    // Final results
    cout << fixed << setprecision(2);

    cout << "\nDestination: " << city << endl;
    cout << "Your trip fare: " << TRIP_FARE << " birr" << endl;
    cout << "Your baggage fare is: " << baggagefare << " birr" << endl;
    cout << "Your total fare is: " << totalfare << " birr" << endl;

    return 0;
}