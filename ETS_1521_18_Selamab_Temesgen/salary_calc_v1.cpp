#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
 double base_salary,hours_worked,bonus_rate,bonus_payment,gross_salary,tax,tax_rate,pension,net_salary,penality_rate,penality;
 int choice;
  const  int regularworkinghour=40;
  const double  pension_rate=0.07;
  cout << "please enter base salary\nnumber of hours worked/week\nbonus rate/hour(etb)\npenality rate(etb)\nrespectively using space" << endl;
  cin >> base_salary>>
  hours_worked
  >>bonus_rate>>
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
  else cout << "invalid input" << endl;
    return 0;
}