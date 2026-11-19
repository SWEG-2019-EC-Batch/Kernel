#include <iostream>
#include <string>
    using namespace std;
    int main(){
    float luggage_weight;
    const float TRIP_FARE=300;
    float luggage_fare=0;
    float total_fare;
    int  seat;
    int age;
    float discount;
    float rate;
    char place;
    string student;
    float student_discount;
    cout << "enter available number of seat " ;
    cin >> seat ;
    if (seat>0)
      {
      cout << "press A for gondar,B for bahirdar,C for wanchi,D for deredawa,and E for debrezeyt " ;
      cin >> place;
      switch (place)
      {
      case 'A':
        cout << "gondar" << endl;
        break;
      case 'B':
        cout << "bahirdar" << endl;
        break;
      case 'C':
        cout << "wanchi" << endl;
        break;
      case 'D':
        cout << "deredawa" << endl;  
        break;
      case 'E':
        cout << "debrezeyt" << endl;  
        break;
      default:
        cout << "invalid" << endl;  
        }
       cout << "enter luggage weight:" <<endl;
    cin >> luggage_weight ;
     if ( luggage_weight >20) luggage_fare=
   (luggage_weight-20)*10;
   
      cout << "enter age" << endl;
      cin >> age ;
     cout << "are you student (Yes/No)" << endl;
   cin >> student ;
     if (age>=60){rate=0.25;
     total_fare =luggage_fare+TRIP_FARE ;
     discount = total_fare *rate;
     total_fare =total_fare- discount;}
    else if  (age<=12){rate=0.5;
     total_fare =luggage_fare+TRIP_FARE ;
     discount = total_fare *rate;}
     else{rate=0.75;
    total_fare =luggage_fare+TRIP_FARE ;
     discount = total_fare *rate;
     total_fare =total_fare- discount;}
     if(student=="yes"||student=="Yes"){rate=0.1;
    student_discount =total_fare*rate;
     total_fare =total_fare-student_discount;
     discount=discount+student_discount;}
    cout << "TRIP_FARE is " << TRIP_FARE << endl;
    cout << "luggage_fare is " << luggage_fare << endl;
    cout << "the discount is " << discount <<endl;
    cout << "the total_fare is " << total_fare << endl;}

else cout << "sold out" << endl;
}