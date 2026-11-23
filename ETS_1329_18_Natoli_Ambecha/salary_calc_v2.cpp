#iclude <>
using namespace std;

int main()
{
double base_salary, gross_salary, bonus_payment = 0.0;
double tax_rate = 0.0, tax = 0.0, net_salary;
double pension = 0.0, penalty = 0.0;
double hourly_rate, worked_hr, bonus_rate = 0.0;
double machinery_penalty = 0.0;
double pension_rate = 0.0;
int WORK_HR = 40;
int choose, worker_type;

int worker_type, choose;
double gross_salary = 0, bonus_payment = 0, penalty = 0, net_salary = 0;

cout << "Worker type (1 = Employee, 2 = Laborer): ";
cin >> worker_type;

if (worker_type == 1)
{
    cout << "Enter your base salary: ";
    cin >> base_salary;
    cout << "Enter hours worked in a week: ";
    cin >> worked_hr;
    cout << "Enter bonus rate (per extra hour): ";
    cin >> bonus_rate;

    cout << "\nChoose which you want to see:" << endl
         << "1 for all" << endl
         << "2 for base salary" << endl
         << "3 for gross salary" << endl
         << "4 for pension" << endl
         << "5 for bonus payment" << endl
         << "6 for tax" << endl
         << "7 for penalty" << endl
         << "8 for net salary" << endl;
    cin >> choose;

    if (worked_hr > WORK_HR)
        bonus_payment = (worked_hr - WORK_HR) * bonus_rate;
    else if (worked_hr < WORK_HR)
        penalty = (WORK_HR - worked_hr) * base_salary / WORK_HR;

    gross_salary = base_salary + bonus_payment - penalty;

    if (gross_salary <= 3500)
        tax_rate = 0;
    else if (gross_salary <= 10000)
        tax_rate = 0.10;
    else if (gross_salary <= 25000)
        tax_rate = 0.15;
    else if (gross_salary <= 50000)
        tax_rate = 0.20;
    else if (gross_salary <= 100000)
        tax_rate = 0.25;
    else
        tax_rate = 0.30;

    tax_deduction = gross_salary * tax_rate;
    pension = gross_salary * PENSION_RATE;
    net_salary = gross_salary - pension - tax_deduction;

    switch (choose)
    {
    case 1:
        cout << "Base salary: " << base_salary << endl;
        cout << "Bonus payment: " << bonus_payment << endl;
        cout << "Penalty: " << penalty << endl;
        cout << "Gross salary: " << gross_salary << endl;
        cout << "Tax deduction: " << tax_deduction << endl;
        cout << "Pension: " << pension << endl;
        cout << "Net salary: " << net_salary << endl;
        break;
    case 2:
        cout << "Base salary: " << base_salary << endl;
        break;
    case 3:
        cout << "Gross salary: " << gross_salary << endl;
        break;
    case 4:
        cout << "Pension: " << pension << endl;
        break;
    case 5:
        cout << "Bonus payment: " << bonus_payment << endl;
        break;
    case 6:
        cout << "Tax deduction: " << tax_deduction << endl;
        break;
    case 7:
        cout << "Penalty: " << penalty << endl;
        break;
    case 8:
        cout << "Net salary: " << net_salary << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
}
else if (worker_type == 2)
{
    // ---------- LABORER ----------
    double worked_hr, hourly_rate, base_pay;
    char has_bonus, damaged;

    cout << "Enter hours worked: ";
    cin >> worked_hr;
    cout << "Enter hourly rate: ";
    cin >> hourly_rate;

    cout << "Does the laborer have a bonus? (y/n): ";
    cin >> has_bonus;
    if (has_bonus == 'y' || has_bonus == 'Y')
    {
        cout << "Enter bonus amount: ";
        cin >> bonus_payment;
    }

    cout << "Did the laborer damage any machinery? (y/n): ";
    cin >> damaged;
    if (damaged == 'y' || damaged == 'Y')
    {
        cout << "Enter penalty amount: ";
        cin >> penalty;
    }

    cout << "\nChoose which you want to see:" << endl
         << "1 for all" << endl
         << "2 for worked hours" << endl
         << "3 for hourly rate" << endl
         << "4 for gross payment" << endl
         << "5 for bonus payment" << endl
         << "6 for penalty" << endl
         << "7 for net payment" << endl;
    cin >> choose;

    base_pay = worked_hr * hourly_rate;
    gross_salary = base_pay + bonus_payment - penalty;
    if (gross_salary < 0)
        gross_salary = 0;   // penalty cannot make pay negative
    net_salary = gross_salary;   // no tax or pension for laborers
switch (choose)
    {
    case 1:
        cout << "Worked hours: " << worked_hr << endl;
        cout << "Hourly rate: " << hourly_rate << endl;
        cout << "Base pay: " << base_pay << endl;
        cout << "Bonus payment: " << bonus_payment << endl;
        cout << "Penalty: " << penalty << endl;
        cout << "Gross payment: " << gross_salary << endl;
        cout << "Net payment: " << net_salary << endl;
        break;
    case 2:
        cout << "Worked hours: " << worked_hr << endl;
        break;
    case 3:
        cout << "Hourly rate: " << hourly_rate << endl;
        break;
    case 4:
        cout << "Gross payment: " << gross_salary << endl;
        break;
    case 5:
        cout << "Bonus payment: " << bonus_payment << endl;
        break;
    case 6:
        cout << "Penalty: " << penalty << endl;
        break;
    case 7:
        cout << "Net payment: " << net_salary << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }
}
else
{
    cout << "Invalid worker type" << endl;
}

return 0;
}
