#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
 double base_salary,hours_worked,Lhours_worked,Lbonus,Lpenality,Lhourly_rate,wages,net_wages,bonus_rate,bonus_payment,gross_salary,tax,tax_rate,pension,net_salary,penality_rate,penality;
 int choice,work_type;
 char Lbonus_rate,Lpenality_rate;
  const  int regularworkinghour=40;
  const double  pension_rate=0.07;
  cout << "enter 1 if you are an employee or 2 if you are labor worker" << endl;
  cin >> work_type;
    if (work_type==1){
  cout << "please enter base salary\nnumber of hours worked/week\nbonus rate/hour(etb)\npenality rate(etb)\nrespectively using space" << endl;
  cin >> base_salary>>hours_worked>>bonus_rate>>
  penality_rate;
   if (base_salary >=0){
    if(hours_worked >regularworkinghour)
    {bonus_payment=(hours_worked-regularworkinghour)*bonus_rate;
    gross_salary=base_salary+bonus_payment;
    }
    else {
           penality=(regularworkinghour-hours_worked)*penality_rate;
            gross_salary=base_salary-penality;}
    
    if (gross_salary<=3500)
          {tax_rate=0;}
    else if (gross_salary>3500&& gross_salary<=10000) 
          {tax_rate=0.1;}
    else if (gross_salary>10000&&gross_salary<=25000)      
          {tax_rate=0.15;}
    else if (gross_salary>25000&&gross_salary<=50000)     
          {tax_rate=0.2;}
    else if (gross_salary>50000&&gross_salary<=100000)    
          {tax_rate=0.25;}
    else {tax_rate=0.3;}
      tax=gross_salary*tax_rate;
      pension=gross_salary*pension_rate;
      net_salary=gross_salary-tax-pension;
      
      cout << "choose what u want to see " << endl;
      cout << "1 to see bonus\n2 for gross_salary\n3 for tax reduction\n4 for pension\n5for net salary\n6for penality\n7for all"<<endl;
      cin >> choice;
      cout << fixed << setprecision(2);
      switch(choice){
      
      case 1:
      cout << "bonus_payment is " << bonus_payment<<endl;
      break;
      case 2:
      cout << "gross_salary is " <<gross_salary<< endl;
      break;
      case 3:
      cout << "tax is " <<tax<< endl;  
      break;
      case 4: 
      cout << "pension is " <<pension <<endl; 
      break;
      case 5: 
      cout << "net salary is " <<net_salary <<endl;
      break;
      case 6:
      cout << "penality" << penality<<endl;
      break;
      case 7:
     cout << "bonus_payment is " << bonus_payment<<endl;
     cout << "gross_salary is " <<gross_salary<< endl;
     cout << "penality" << penality<<endl;
     cout << "tax is " <<tax<< endl;  
     cout << "pension is " <<pension <<endl; 
     cout << "net salary is " <<net_salary <<endl;
     break;
      default:
     cout << "invalid choice" << endl;
      }}
  else cout << "invalid input" << endl;}
  else if(work_type==2){cout << "please enter hours worked and hourly rate respectively separatedby space" << endl;
  cin >> Lhours_worked>>Lhourly_rate;
  
 cout << "do you have bonus(Y/N)?" << endl;
   cin >> Lbonus_rate;
    if(Lbonus_rate=='Y'|| Lbonus_rate=='y'){
    cout << "please enter your bonus(birr)" << endl;
    cin >>Lbonus;}
    
    else if (Lbonus_rate=='N'|| Lbonus=='n'){Lbonus=0;}
    else{cout << "invalid answer!" << endl;}
    cout << "do you have any penalties(Y/N)?" << endl;
    cin >>Lpenality_rate;
    
    if(Lpenality_rate=='Y'||Lpenality_rate=='y'){cout << "please enter your penality(birr)" << endl;
    cin >> Lpenality ;}
    else if(Lpenality_rate=='N'|| Lpenality_rate=='n'){Lpenality=0;}
    else{cout << "invalid answer!" << endl;}
     wages=Lhourly_rate*Lhours_worked;
    net_wages=wages+Lbonus-Lpenality;
    cout << "your bonus is " <<Lbonus<< endl;
    cout << "your penality is " << Lpenality<<endl;
    cout << "Your net wage is: " << net_wages <<endl;
    }
    else{cout << "invalid choice!" << endl;}
    return 0;
}