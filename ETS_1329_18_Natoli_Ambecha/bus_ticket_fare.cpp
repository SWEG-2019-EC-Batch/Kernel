#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "ROUTE SELECTION" << endl;
    cout << "1. Addis Ababa to Jimma" << endl;
    cout << "2. Addis Ababa to Gambella" << endl;
    cout << "3. Addis Ababa to Gonder" << endl;
    cout << "4. Addis Ababa to Arba Minch" << endl;
    cout << "5. Addis Ababa to Adama" << endl;

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

    return 0;
}
