 TASK 1: STUDENT_COURSE_TOTAL

// Variable declaration

 double assignment;
 double midterm;
 double finalMark;
 double total_course_mark;
 string result;

// Constant definition

const double ASSIGN_WEIGHT = 0.20;
const double MID_WEIGHT = 0.30;
const double FINAL_WEIGHT = 0.50;
const double PASS_MARK = 50.0;

// Reading the input

cout << "Enter assignment, midterm and final marks separated by space: ";
cin >> assignment >> midterm >> finalMark;

// Calculation

Total_course_mark=(assignment * ASSIGN_WEIGHT)+(midterm * MID_WEIGHT)+(Final *FINAL_WEIGHT)
result = (total >= PASS_MARK) ? "Pass" : "Fail";

// Printing the results

cout << fixed << setprecision(1);
cout << "Total mark: " << total << endl;
cout << "Result: " << result << endl;

TASK 2: ELECTRICITY_BILL

//Variable declaration

int unit;
double energyCharge;
double seviceCharge;
double totalBill;

// Constant definition

const int LIMIT = 50;
const double FIRST_RATE = 1.50;
const double EXTRA_RATE = 2.00;
const double SERVICE_CHARGE = 10.0;

// Reading the input

cout << "Enter electricity units used: ";
cin >> units;

// Calculation

energyCharge = (units <= LIMIT) ? units * FIRST_RATE : (LIMIT * FIRST_RATE) + (units - LIMIT) * EXTRA_RATE;

// Printing the results

cout << fixed << setprecision(2);
cout << "Energy charge: " << energyCharge << endl;
cout << "Service charge: " << serviceCharge << endl;
cout << "Total bill: " << totalBill << endl;
