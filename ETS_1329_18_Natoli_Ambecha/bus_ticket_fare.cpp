#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   const float TRIP_FARE= 300; 
   float baggageWeight, baggageFare=0,totalFare;
    int seat_number; 
    int age;
    int choice;
    double price, discount = 0;
    char student;

    cout << "Enter available numbers of seats:" <<endl; 
    cin >> seat_number;
if (seatno <=0) {
cout ‹< " All seats are sold out" <<endl;
}
else {
    cout << "ROUTE SELECTION" << endl;
    cout << "1. Addis Ababa to Jimma - 2000 Birr" << endl;
    cout << "2. Addis Ababa to Gambella - 1500 Birr" << endl;
    cout << "3. Addis Ababa to Gonder - 1000 Birr" << endl;
    cout << "4. Addis Ababa to Arba Minch - 500 birr" << endl;
    cout << "5. Addis Ababa to Adama - 400 Birr" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected Addis Ababa to Jimma." << endl;
            break;

        case 2:
            cout << "You selected Addis Ababa to Gambella." << endl;
            break;

        case 3:
            cout << "You selected Addis Ababa to Gonder." << endl;
            break;

        case 4:
            cout << "You selected Addis Ababa to Arba Minch." << endl;
            break;

        case 5:
            cout << "You selected Addis Ababa to Adama." << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
    }

    cout << "Enter your age: " <<endl;
    cin >> age;

    cout << "Are you a student? (y/n): " <<endl;
    cin >> student;

    cout << "Enter the original price: " <<endl;
    cin >> price;

    if (age <= 12 && student == 'y')
    {
        discount = 80;
    }
    else if (age <= 12)
    {
        discount = 50;
    }
    else if (age >= 60 && student == 'y')
    {
        discount = 55;
    }
    else if (age >= 60)
    {
        discount = 25;
    }
    else if (student == 'y')
    {
        discount = 30;
    }
    else
    {
        discount = 0;
    }

cout<< "Enter baggage weight"<<endl;
cin>> baggageWeight;
    
if (baggageweight > 20){
baggageFare =(baggageWeight -20)*10;
}
totalFare = baggageFare + TRIP_FARE;

cout << fixed << setprecision(2); 
cout << "TRIP_FARE: " << TRIP_FARE<<endl;
cout << "baggage fare : " << baggageFare<<endl;
cout << "total fare: " << totalFare<<endl;
cout << "Discount: " << discount << "%" << endl;
    cout << "Final price: " << price - (price * discount / 100) << endl;
}
    return 0;
}
