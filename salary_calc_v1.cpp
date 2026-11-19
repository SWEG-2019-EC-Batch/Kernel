#include <iostream>
using namespace std;

int main() {
    double baseSalary, hoursWorked, bonusRate;
    double bonus = 0, penalty = 0;
    double grossSalary, pension, tax, netSalary;
    int choice;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    cout << "Enter hours worked: ";
    cin >> hoursWorked;

    cout << "Enter bonus rate per overtime hour: ";
    cin >> bonusRate;

    // Calculate bonus
    if (hoursWorked > 40) {
        bonus = (hoursWorked - 40) * bonusRate;
    }

    // Calculate penalty
    if (hoursWorked < 40) {
        penalty = (40 - hoursWorked) * baseSalary / 40;
    }

    // Calculate gross salary
    grossSalary = baseSalary + bonus - penalty;

    // Calculate pension
    pension = grossSalary * 0.07;

    // Calculate tax
    if (grossSalary > 0 && grossSalary < 3500) {
        tax = 0;
    }
    else if (grossSalary <= 10000) {
        tax = grossSalary * 0.10;
    }
    else if (grossSalary <= 25000) {
        tax = grossSalary * 0.15;
    }
    else if (grossSalary <= 50000) {
        tax = grossSalary * 0.20;
    }
    else if (grossSalary <= 100000) {
        tax = grossSalary * 0.25;
    }
    else {
        tax = grossSalary * 0.30;
    }

    // Calculate net salary
    netSalary = grossSalary - pension - tax;

    // Display menu
    cout<<"SALARY INFORMATION MENU"<< endl;
    cout << "1. Bonus Payment" << endl;
    cout << "2. Gross Salary" << endl;
    cout << "3. Pension" << endl;
    cout << "4. Tax" << endl;
    cout << "5. Net Salary" << endl;
    cout << "6. Display All Information" << endl;

    cout << "\nEnter your choice (1-6): ";
    cin >> choice;

    // Switch statement
    switch (choice) {

        case 1:
            cout << "Bonus Payment: " << bonus << endl;
            break;

        case 2:
            cout << "Gross Salary: " << grossSalary << endl;
            break;

        case 3:
            cout << "Pension (7%): " << pension << endl;
            break;

        case 4:
            cout << "Tax: " << tax << endl;
            break;

        case 5:
            cout << "Net Salary: " << netSalary << endl;
            break;

        case 6:
            cout << "\nBonus Payment: " << bonus << endl;
            cout << "Penalty: " << penalty << endl;
            cout << "Gross Salary: " << grossSalary << endl;
            cout << "Pension (7%): " << pension << endl;
            cout << "Tax: " << tax << endl;
            cout << "Net Salary: " << netSalary << endl;
            break;

        default:
            cout << "Invalid choice! Please select between 1 and 6." << endl;
    }

    return 0;
}