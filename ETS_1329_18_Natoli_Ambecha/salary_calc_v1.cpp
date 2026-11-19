#include <iostream>
using namespace std;

int main()
{
    double base_salary, gross_salary, bonus_payment, tax_rate ,net_salary, pension, penalty;
    double const pension_rate = 0.07;
    int WORK_HR = 40;
    int choose;

    cout << "Enter your base salary: " << endl;
    cin >> base_salary;
    cout << "Enter hours worked in a week: " << endl;
    cin >> worked_hr;
    cout << "Enter bonus rate: " << endl;
    cin >> bonus_rate;

    cout << "Choose which you want to see:" << endl;
         <<"1 for all" << endl;
         << "2 for base salary" << endl;
         << "3 for gross payment" << endl;
         << "4 for pension" << endl;
         << "5 for bonus payment" << endl;
         << "6 for tax " << endl;
         << "7 for penalty" << endl;
         << "8 for net salary" << endl;

    cin >> choose;

    if (WORK_HR > 40)
    {
        bonus_payment = (WORK_HR - 40) * bonus_rate;
    }
    else if (WORK_HR < 40)
    {
        penalty = (40 - WORK_HR) * base_salary / 40;
    }
    else
    {
        bonus_rate = 0;
        penalty = 0;
    }

    gross_salary = (bonus_payment + base_salary) - penalty;

    if (gross_salary >= 0 && gross_salary <= 3500)
    {
        tax_rate = 0;
    }
    else if (gross_salary > 3500 && gross_salary <= 10000)
    {
        tax_rate = 0.1;
    }
    else if (gross_salary > 10000 && gross_salary <= 25000)
    {
        tax_rate = 0.15;
    }
    else if (gross_salary > 25000 && gross_salary <= 50000)
    {
        tax_rate = 0.2;
    }
    else if (gross_salary > 50000 && gross_salary <= 100000)
    {
        tax_rate = 0.25;
    }
    else if (gross_salary > 100000)
    {
        tax_rate = 0.3;
    }
   
    tax = gross_salary * tax_rate;
    pension = gross_salary * pension_rate;
    net_salary = gross_salary - pension - tax;

    switch (choose)
    {

    case 1:
        cout << "Penalty: " << penalty << endl;
        cout << "Base salary: " << base_salary << endl;
        cout << "Gross salary: " << gross_salary << endl;
        cout << "Bonus Payment: " << bonus_payment << endl;
        cout << "Tax Deduction: " << tax_deduction << endl;
        cout << "Pension: " << pension << endl;
        cout << "Net salary: " << net_salary << endl;

        break;
    case 2:
        cout << "Base salary: " << base_salary << endl;
        
    case 3:
        cout << "Gross Salary: " << gross_salary << endl;
        break;

    case 4:
        cout << "Pension: " << pension << endl;
        break;

    case 5:
        cout << "Bonus Payment: " << bonus_payment << endl;
        break;

    case 6:
        cout << "Tax Deduction: " << tax_deduction << endl;
        break;

    case 7:
        cout << "Penalty: " << penalty << endl;
        break;

    case 8:
        cout << "Net Salary: " << net_salary << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
        
        break;
    }

    return 0;
}
