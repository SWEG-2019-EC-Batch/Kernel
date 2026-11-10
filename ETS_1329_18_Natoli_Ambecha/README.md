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
