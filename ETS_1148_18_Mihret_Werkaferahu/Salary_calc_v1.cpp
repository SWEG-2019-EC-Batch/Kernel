// A C++ program that calculates an employee's salary, including overtime bonus, tax, pension, penalties, total deductions, and net salary, and allows the user to view different salary details through a menu.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // INPUT: Enter the employee's base salary and working hours.
    float base_salary;
    float hr;
    cout<<"Enter your base salary: ";
    cin>>base_salary;
    cout<<"Enter how much hours you worked: ";
    cin>>hr;

    // INPUT VALIDATION: Check that base salary and working hours are not negative.
    if (base_salary < 0 || hr < 0) {
    cout << "Invalid input!";
    return 0;
}

    // CONSTANT DECLARATION: Define the standard working hours.
    const float WORK_HR=40;

    // VARIABLE DECLARATION: Declare variables for salary calculations.
    float gross_salary;
    float tax;
    float pension;
    float net_salary;
    float bonus_payment=0;

    // CALCULATION: Calculate overtime bonus payment.
    // INPUT: Ask for the bonus rate if the employee works more than 40 hours.
    if (hr>WORK_HR){
        float bonus_salary;
        cout<<"Enter the bonus salary: ";
        cin>>bonus_salary;

     // INPUT VALIDATION: Replace a negative bonus rate with zero.
     if (bonus_salary < 0) {
    cout << "Bonus salary can not be negative";
    bonus_salary=0;
}
        bonus_payment=bonus_salary*(hr-WORK_HR);
    }
  else{
    bonus_payment=0;
    }

    // CALCULATION: Calculate gross salary by adding the base salary and overtime bonus.
    gross_salary=base_salary+bonus_payment;

    // CALCULATION: Determine the tax rate according to the gross salary range.
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

        // CALCULATION: Calculate tax and pension deductions.
        tax=tax_rate*gross_salary;
        pension=0.07*gross_salary;

        // VARIABLE DECLARATION: Initialize penalty and declare variables for employee attendance information.
      float penalty = 0;
      int late;
      int absence;  

    /* PENALTY CALCULATION:
       Penalties may be applied for missing working hours,
       arriving late, and having an unexcused absence. */

    // CALCULATION: Apply a penalty for working fewer than 40 hours.
if (hr < WORK_HR) {
    cout<<"You have a penalty for missing working hours"<<endl;
    penalty = (WORK_HR - hr) * 100;
}

    // INPUT: Ask whether the employee arrived late.
cout << "Did you arrive late? (Enter 1 if you have arrived late): ";
cin >> late;

    // CALCULATION: Add a penalty if the employee arrived late.
if (late == 1) {
    penalty += 50;
}

    // INPUT: Ask whether the employee had an unexcused absence.
cout << "Did you have an unexcused absence?(Enter 1 if you have an unexcused absence): ";
cin >> absence;

    // CALCULATION: Add a penalty for an unexcused absence.
if (absence == 1) {
    penalty += 200;
}

    // CALCULATION: Calculate total deductions and net salary.
      float total_deduction;
      total_deduction=tax+pension+penalty;
net_salary=gross_salary-total_deduction;

    // OUTPUT FORMATTING: Display monetary values with two decimal places.
      cout<<fixed<<setprecision(2)<<endl;

    // INPUT: Ask the user to select which salary information they want to view.
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

    // OUTPUT: Use a switch statement to display the selected salary information.
switch (choice)
{
    case 1: cout<<"Bonus payment: "<<bonus_payment; break;
    case 2: cout<<"Gross salary: "<<gross_salary; break;
    case 3: cout<<"Pension: "<<pension; break;
    case 4: cout<<"Tax: "<<tax; break;
    case 5:cout<<"Net salary: "<<net_salary; break;
       case 6:cout<<"Penalty: "<<penalty; break;
     case 7: cout<<"Total desuction: "<<total_deduction; break;

    // OUTPUT: Display all salary details in one complete report.
    case 8:cout<<"Your report including all is as follows"<<endl;
    cout<<"Bonus payment: "<<bonus_payment<<endl;
    cout<<"Gross salary: "<<gross_salary<<endl;
    cout<<"Pension: "<<pension<<endl;
    cout<<"Tax: "<<tax<<endl;
    cout << "Penalty: " << penalty << endl;
    cout<<"Total deduction: "<<total_deduction<<endl;
    cout<<"Net salary: "<<net_salary<<endl;
     break;

    // OUTPUT: Display an error message for an invalid menu choice.
    default:
        cout << "Invaild choice" << endl;
        return 0;
}

}