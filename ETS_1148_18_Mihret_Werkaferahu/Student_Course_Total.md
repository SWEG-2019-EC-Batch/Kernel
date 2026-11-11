I. Input/Output
 1. Input
     Assignment mark
     Midterm mark
     Final exam mark
 2. Output
    Total course mark
    Pass or Fail

II. Process(Operation)
    1.Declare variables to store assignment mark,    midterm mark, final exam mark and total course mark
    2.Define constants for assignment weight percentage, midterm weight percentage, final exam weight percentage and pass mark
    3. Display prompts and read those three marks
    4. Multiply the input marks with respective weight percentage
    5. Add the three calculated weighted marks to get the total course mark
    6. Compare the total course mark with the pass mark
    7.Determine whether the student passes or fails using the conditional operator
    8. Display the total course mark to one decimal place and the pass or fail result
    
III. Design the program
//Variable declaration
     double Assignment mark;
     double Midterm mark;
     double Final exam mark;
     double Total course mark;
//Constant definition
    const double ASSIGNMENT_WEIGHT_PERCENTAGE = 0.20;
    const double MIDTERM_WEIGHT_PERCENTAGE = 0.30;
    const double FINALEXAM_WEIGHT_PERCENTAGE = 0.50;
    const double PASS_MARK = 50;
//Reading the input
    cout << "Enter Assignment mark (out of 100): ";    
    cin >> Assignmentmark;

    cout << "Enter Midterm mark (out of 100): ";
    cin >> Midtermmark;

    cout << "Enter Final Exam mark (out of 100): ";
    cin >> FinalExammark;
//Calculation
Totalmark = (Assignmentmark * ASSIGNMENT_WEIGHT_PERCENTAGE) +(Midtermmark * MIDTERM_WEIGHT_PERCENTAGE) +(FinalExammark * FINALEXAM_WEIGHT_PERCENTAGE)
//Printing the results
    cout << fixed << setprecision(1);
    cout << "Course Total: " << Totalcoursemark << endl;

    cout << "Academic Evaluation: "
         << Evaluation << endl;



    




