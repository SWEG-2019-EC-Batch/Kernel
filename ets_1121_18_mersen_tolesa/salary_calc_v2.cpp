#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    int workerType;
    float base_salary, worked_hours, bonus_rate, hourly_rate;
    float bonus_payment = 0, penalty = 0;
    float gross_salary, tax = 0, pension, net_salary;

    cout << "Enter 1 for Employee, 2 for Laborer: ";
    cin >> workerType;

    if (workerType == 1) {
        // Get employee information
        cout << "Enter base salary: ";
        cin >> base_salary;

        cout << "Enter hours worked: ";
        cin >> worked_hours;

        cout << "Enter bonus rate: ";
        cin >> bonus_rate;

        // Calculate bonus or penalty
        if (worked_hours > 40) {
            bonus_payment = (worked_hours - 40) * bonus_rate;
        }
        else if (worked_hours < 40) {
            penalty = (40 - worked_hours) * base_salary / 40;
        }
        else {
            bonus_payment = 0;
            penalty = 0;
        }

        // Calculate gross salary
        gross_salary = base_salary + bonus_payment;

        // Calculate tax deduction
        if (gross_salary > 0 && gross_salary <= 3500) {
            tax = 0;
        }
        else if (gross_salary > 3500 && gross_salary <= 10000) {
            tax = gross_salary * 0.10;
        }
        else if (gross_salary > 10000 && gross_salary <= 20000) {
            tax = gross_salary * 0.15;
        }
        else if (gross_salary > 20000 && gross_salary <= 50000) {
            tax = gross_salary * 0.20;
        }
        else if (gross_salary > 50000 && gross_salary <= 100000) {
            tax = gross_salary * 0.25;
        }
        else if (gross_salary > 100000) {
            tax = gross_salary * 0.30;
        }
        else {
            tax = 0;
        }

        // Calculate pension
        pension = gross_salary * 0.07;

        // Calculate net salary
        net_salary = gross_salary - tax - pension - penalty;
    }
    else if (workerType == 2) {
        // Laborer: worked hours, hourly rate, bonus, penalty
        // No tax, no pension
        cout << "Enter hours worked: ";
        cin >> worked_hours;

        cout << "Enter hourly rate: ";
        cin >> hourly_rate;

        cout << "Enter bonus (0 if no bonus): ";
        cin >> bonus_payment;

        cout << "Enter penalty for damaged machinery (0 if no damage): ";
        cin >> penalty;

        base_salary = worked_hours * hourly_rate;
        gross_salary = base_salary + bonus_payment;
        tax = 0;
        pension = 0;
        net_salary = gross_salary - penalty;
    }
    else {
        cout << "Invalid worker type!" << endl;
        return 1;
    }

    // Display menu
    cout << "\n----- SALARY MENU -----" << endl;
    cout << "1. Gross Salary" << endl;
    cout << "2. Tax Deduction" << endl;
    cout << "3. Pension Deduction" << endl;
    cout << "4. Penalty" << endl;
    cout << "5. Net Salary" << endl;
    cout << "6. Display All Details" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    // Display selected information using switch
    cout << fixed << setprecision(2);

    switch (choice) {
        case 1:
            cout << "Gross Salary: " << gross_salary << endl;
            break;

        case 2:
            cout << "Tax Deduction: " << tax << endl;
            break;

        case 3:
            cout << "Pension Deduction: " << pension << endl;
            break;

        case 4:
            cout << "Penalty: " << penalty << endl;
            break;

        case 5:
            cout << "Net Salary: " << net_salary << endl;
            break;

        case 6:
            cout << "\n----- SALARY DETAILS -----" << endl;
            cout << "Base Salary: " << base_salary << endl;
            if (workerType == 2) {
                cout << "Hourly Rate: " << hourly_rate << endl;
            }
            cout << "Worked Hours: " << worked_hours << endl;
            cout << "Bonus Payment: " << bonus_payment << endl;
            cout << "Penalty: " << penalty << endl;
            cout << "Gross Salary: " << gross_salary << endl;
            cout << "Tax Deduction: " << tax << endl;
            cout << "Pension: " << pension << endl;
            cout << "Net Salary: " << net_salary << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }
  return 0;
}
