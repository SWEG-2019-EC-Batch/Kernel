
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // Constants
    const double ASSIGN_WEIGHT = 0.20;
    const double MID_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // Variables
    double assignment, midterm, finalMark, total;
    string result;

    // Read input
    cout << "Enter assignment, midterm and final marks: ";
    cin >> assignment >> midterm >> finalMark;

    // Calculate total
    total = (assignment * ASSIGN_WEIGHT)
          + (midterm * MID_WEIGHT)
          + (finalMark * FINAL_WEIGHT);

    // Decide Pass or Fail
    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // Print result
    cout << fixed << setprecision(1);
    cout << "Total mark: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}

