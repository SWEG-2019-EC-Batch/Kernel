#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double ASSIGNMENT_WEIGHT_PERCENTAGE = 0.20;
    const double MIDTERM_WEIGHT_PERCENTAGE = 0.30;
    const double FINALEXAM_WEIGHT_PERCENTAGE = 0.50;
    const double PASS_MARK = 50;

    double Assignmentmark, Midtermmark, FinalExammark, Totalcoursemark;
    string Evaluation;

    cout << " STUDENT COURSE TOTAL CALCULATER" << endl;
    

    cout << "Enter Assignment mark (out of 100): ";    cin >> Assignmentmark;

    cout << "Enter Midterm mark (out of 100): ";
    cin >> Midtermmark;

    cout << "Enter Final Exam mark (out of 100): ";
    cin >> FinalExammark;

    Totalcoursemark = (Assignmentmark * ASSIGNMENT_WEIGHT_PERCENTAGE) +
            (Midtermmark * MIDTERM_WEIGHT_PERCENTAGE) +
            (FinalExammark * FINALEXAM_WEIGHT_PERCENTAGE);
    
    Evaluation = Totalcoursemark >= PASS_MARK ? "Pass" : "Fail";

    cout << "\n RESULTS " << endl;

    cout << fixed << setprecision(1);
    cout << "Course Total: " << Totalcoursemark << endl;

    cout << "Academic Evaluation: "
         << Evaluation << endl;

    

    return 0;
}