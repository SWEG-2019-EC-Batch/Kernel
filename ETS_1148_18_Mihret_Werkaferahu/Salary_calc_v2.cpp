// PROGRAM PURPOSE:
// This program calculates the salary of either an employee or a laborer.
// It asks the user for the information needed, calculates earnings and deductions,
// and displays the salary details selected by the user.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int workerType;

    cout << "Select worker type:" << endl;
    cout << "1. Employee" << endl;
    cout << "2. Laborer" << endl;
    cout << "Enter your choice: ";
    cin >> workerType;

    if (workerType == 1) {

        // The user selected Employee, so run the original employee salary calculation.

        // Ask the employee to enter their base salary and the number of hours they worked.
        float base_salary;
        float hr;
        cout<<"Enter your base salary: ";
        cin>>base_salary;
        cout<<"Enter how much hours you worked: ";
        cin>>hr;

        // Check that the salary and working hours are not negative before continuing.
        if (base_salary < 0 || hr < 0) {
        cout << "Invalid input!";
        return 0;
    }

        // Set the normal working week to 40 hours.
        const float WORK_HR=40;

        // Create variables to store the employee's salary details.
        float gross_salary;
        float tax;
        float pension;
        float net_salary;
        float bonus_payment=0;

        // Check whether the employee worked more than the normal 40 hours.
        // If there is overtime, ask for the bonus rate for each extra hour.
        if (hr>WORK_HR){
            float bonus_salary;
            cout<<"Enter the bonus salary: ";
            cin>>bonus_salary;

         // If the bonus rate is negative, show a message and use zero instead.
         if (bonus_salary < 0) {
        cout << "Bonus salary can not be negative";
        bonus_salary=0;
    }
            bonus_payment=bonus_salary*(hr-WORK_HR);
        }
      else{
        bonus_payment=0;
        }

        // Add the overtime bonus to the base salary to get the gross salary.
        gross_salary=base_salary+bonus_payment;

        // Choose the tax rate that matches the employee's gross salary range.
        float tax_rate=0;
        if(gross_salary>=0&&gross_salary<=3500){
            tax_rate=0;
            }
       else if(gross_salary>3500&&gross_salary<=10000){
            tax_rate=0.1;
            }
               else if(gross_salary>10000&&gross_salary<=25000){
            tax_rate=0.15;
            }
               else if(gross_salary>25000&&gross_salary<=50000){
            tax_rate=0.2;
            }
               else if(gross_salary>50000&&gross_salary<=100000){
            tax_rate=0.25;
            }
            else if (gross_salary>100000){
                tax_rate=0.3;
            }

            // Work out the employee's tax and 7% pension deduction.
            tax=tax_rate*gross_salary;
            pension=0.07*gross_salary;

            // Start the penalty at zero and prepare to record lateness and absence.
          float penalty = 0;
          int late;
          int absence;

        /* PENALTY CALCULATION:
           Penalties may be applied for missing working hours,
           arriving late, and having an unexcused absence. */

        // If the employee worked fewer than 40 hours, calculate the missing-hours penalty.
    if (hr < WORK_HR) {
        cout<<"You have a penalty for missing working hours"<<endl;
        penalty = (WORK_HR - hr) * 100;
    }

        // Ask whether the employee arrived late.
    cout << "Did you arrive late? (Enter 1 if you have arrived late): ";
    cin >> late;

        // Add 50 to the penalty if the employee arrived late.
    if (late == 1) {
        penalty += 50;
    }

        // Ask whether the employee had an unexcused absence.
    cout << "Did you have an unexcused absence?(Enter 1 if you have an unexcused absence): ";
    cin >> absence;

        // Add 200 to the penalty if the absence was unexcused.
    if (absence == 1) {
        penalty += 200;
    }

        // Add the deductions together, then subtract them from the gross salary.
          float total_deduction;
          total_deduction=tax+pension+penalty;
    net_salary=gross_salary-total_deduction;

        // Show money values with two digits after the decimal point.
          cout<<fixed<<setprecision(2)<<endl;

        // Ask the employee which salary detail they want to see.
          int choice;

    cout<< "\n Select what you want to see" << endl;
    cout<< "Press 1 to see bonus payment" << endl;
    cout<< "Press 2 to see gross salary" << endl;
    cout<< "Press 3 to see pension" << endl;
    cout<< "Press 4 to see tax" << endl;
    cout<< "Press 5 to see net salary" << endl;
    cout<< "Press 6 to see penalty"<<endl;
    cout<< "Press 7 to see total deduction"<<endl;
    cout<< "Press 8 to see the complete salary report"<<endl;

    cout << "\n Enter your choice(1-7): ";
    cin >> choice;

        // Use the employee's menu choice to display the requested information.
    switch (choice)
    {
        case 1: cout<<"Bonus payment: "<<bonus_payment; break;
        case 2: cout<<"Gross salary: "<<gross_salary; break;
        case 3: cout<<"Pension: "<<pension; break;
        case 4: cout<<"Tax: "<<tax; break;
        case 5:cout<<"Net salary: "<<net_salary; break;
           case 6:cout<<"Penalty: "<<penalty; break;
         case 7: cout<<"Total desuction: "<<total_deduction; break;

        // If the employee chooses 8, display all salary details together.
        case 8:cout<<"Your report including all is as follows"<<endl;
        cout<<"Bonus payment: "<<bonus_payment<<endl;
        cout<<"Gross salary: "<<gross_salary<<endl;
        cout<<"Pension: "<<pension<<endl;
        cout<<"Tax: "<<tax<<endl;
        cout << "Penalty: " << penalty << endl;
        cout<<"Total deduction: "<<total_deduction<<endl;
        cout<<"Net salary: "<<net_salary<<endl;
         break;

        // If the menu choice is not valid, display an error message.
        default:
            cout << "Invaild choice" << endl;
            return 0;
    }

    } else if (workerType == 2) {

        // The user selected Laborer, so calculate the laborer's salary separately.

        // Ask the laborer to enter the hours worked and their hourly rate.
        float worked_hours;
        float hourly_rate;
        float bonus_payment = 0;
        float gross_salary;
        float penalty = 0;
        float total_deduction;
        float net_salary;
        int has_bonus;
        int damaged_machinery;

        // Get the laborer's working hours and hourly rate.
        cout << "Enter how many hours you worked: ";
        cin >> worked_hours;
        cout << "Enter your hourly rate: ";
        cin >> hourly_rate;

        // Check that the hours and hourly rate are not negative.
        if (worked_hours < 0 || hourly_rate < 0) {
            cout << "Invalid input!";
            return 0;
        }

        // Ask whether the laborer has a bonus.
        cout << "Do you have a bonus? (Enter 1 for Yes and 0 for No): ";
        cin >> has_bonus;

        if (has_bonus == 1) {
            cout << "Enter your bonus amount: ";
            cin >> bonus_payment;
            if (bonus_payment < 0) {
                cout << "Bonus cannot be negative.";
                return 0;
            }
        } else if (has_bonus != 0) {
            cout << "Invalid input!";
            return 0;
        }

        // Multiply the hours worked by the hourly rate, then add any bonus.
        gross_salary = (worked_hours * hourly_rate) + bonus_payment;

        // Ask whether any machinery was damaged.
        cout << "Did you damage any machinery? (Enter 1 for Yes and 0 for No): ";
        cin >> damaged_machinery;

        // If machinery was damaged, ask for the penalty amount.
        if (damaged_machinery == 1) {
            cout << "Enter the machinery damage penalty: ";
            cin >> penalty;
            if (penalty < 0) {
                cout << "Penalty cannot be negative.";
                return 0;
            }
        } else if (damaged_machinery != 0) {
            cout << "Invalid input!";
            return 0;
        }

        // Laborers do not have tax or pension deductions, so both amounts are zero.
        float tax = 0;
        float pension = 0;
        // Add the deductions together, then subtract them from gross salary.
        total_deduction = tax + pension + penalty;
        net_salary = gross_salary - total_deduction;

        cout << fixed << setprecision(2);

        // Ask which part of the laborer's salary report they want to view.
        int choice;
        cout << "\nSelect what you want to see" << endl;
        cout << "Press 1 to see bonus payment" << endl;
        cout << "Press 2 to see gross salary" << endl;
        cout << "Press 3 to see pension" << endl;
        cout << "Press 4 to see tax" << endl;
        cout << "Press 5 to see net salary" << endl;
        cout << "Press 6 to see penalty" << endl;
        cout << "Press 7 to see total deduction" << endl;
        cout << "Press 8 to see the complete salary report" << endl;
        cout << "\nEnter your choice (1-8): ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Bonus payment: " << bonus_payment; break;
            case 2: cout << "Gross salary: " << gross_salary; break;
            case 3: cout << "Pension: " << pension; break;
            case 4: cout << "Tax: " << tax; break;
            case 5: cout << "Net salary: " << net_salary; break;
            case 6: cout << "Penalty: " << penalty; break;
            case 7: cout << "Total deduction: " << total_deduction; break;
            case 8:
                cout << "Your laborer salary report is as follows" << endl;
                cout << "Hours worked: " << worked_hours << endl;
                cout << "Hourly rate: " << hourly_rate << endl;
                cout << "Bonus payment: " << bonus_payment << endl;
                cout << "Gross salary: " << gross_salary << endl;
                cout << "Pension: " << pension << endl;
                cout << "Tax: " << tax << endl;
                cout << "Penalty: " << penalty << endl;
                cout << "Total deduction: " << total_deduction << endl;
                cout << "Net salary: " << net_salary << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
                return 0;
        }

    } else {
        cout << "Invalid worker type!" << endl;
        return 0;
    }

    return 0;
}
