#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    double assignment, midterm, finalExam, total;

    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * ASSIGNMENT_WEIGHT) +
            (midterm * MIDTERM_WEIGHT) +
            (finalExam * FINAL_WEIGHT);

    cout << fixed << setprecision(1);
    cout << "Total: " << total << endl;
    cout << "Result: " << ((total >= PASS_MARK) ? "Pass" : "Fail") << endl;

    return 0;
}