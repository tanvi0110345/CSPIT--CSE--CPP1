#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 int enrollment;
 char name[20];
 char branch[20];
 int semester;
 char gender[05];
 char bloodgroup[05];
 char dob[20];

 int n;
 // some calculation

 float mathamatics, physics, cpf;
 float total, average, percentage,result;

 cout<< "*************************************************************************************\n";
 cout<< "                              STUDENT  RECORD MANAGMENT SYSTEM\n";
 cout<< "*************************************************************************************\n";

 cout<< " Enter enrollment: ";
 cin>> enrollment;

 cout<< "Enter name: ";
 cin>> name;

 cout<< "Enter branch: ";
 cin>> branch;

 cout<< "enter semester: ";
 cin>> semester;

 cout<< "Enter date of birth: ";
 cin>> dob;

 cout<< " Enter gender: ";
 cin>> gender;

 cout<< "Enter bloodgroup: ";
 cin>> bloodgroup;

// for calculation and students input information
 cout<< "************************************************************************************\n";
 cout << "                     STUDENT INFORMATION\n";
 cout<< "************************************************************************************\n";

 //cout<< " mathamatics: "; if you want to take input from user then dont intilized the value with variable name just declare the variable.
 //cin>> mathamatics;
 mathamatics = 80; // from this you can't take value from user cause you altready intilized value.

 cout<< " physics: ";
 cin>> physics;

 //cout<< "cpf: ";
// cin>> cpf;
cpf = 70;

 // calculation

 total = mathamatics + physics + cpf;
 average = total / 3;
 percentage = (total/300) * 100;

 cout<< "************************************************************************************\n";
 cout<<"                       STUDENT ACADAMIC REPORT\n";
 cout<< "************************************************************************************\n";
 
 cout<< left << setw(30) << "enrollment number"
     << ": " << enrollment << endl;

cout<< left << setw(30) << "name"
    << ": " << name << endl;

cout<< left << setw(30) << "branch"
    << ": " << branch   << endl;

cout<< left << setw(30) << "semester"
    << ": " << semester << endl;

cout<< left << setw(30) << "gender"
    << ": " << gender << endl;
    
cout<< left << setw(30) << "bloodgroup"
    << ": " << bloodgroup << endl;

 cout<< left << setw(30) << "date of birth"
    << ": " << dob << endl;

    // now let's do increment decrement...!

cout<< "***************************************************************************************\n";
cout<< "                         CALCULATION\n";
cout<< "***************************************************************************************\n";

cout<< left << setw(30) << "total"
    << ": " << total << endl;

cout<< left << setw(30) << "average"
    << ": " << average << endl;

cout << left << setw(30) << "percentage"
     << ": " << percentage << endl;


cout<< "****************************************************************************************\n";
cout<< "                          INCREMENT DECREMENT REPORT\n";
cout<< "****************************************************************************************\n";

cout<< left << setw(30) << "cpf"
    << ": " << cpf << endl;
    ++cpf; // PRE INCREAMENT

cout<< left << setw(30) << "cpf marks after increament"
    << ": " << cpf << endl;
    --cpf; // PRE DECREAMENT

cout<< left << setw(30) << "cpf marks after dicreament"
    << ": " << cpf << endl;
cpf++; // POST INCREAMENT

cout<< left << setw(30) << "cpf marks after postfixed increament operator"
    << ": " << cpf << endl;
    cpf--; // POST DECREAMENT

cout<< left << setw(30) << "cpf marks after postfixed dicreament operator"
    << ": " << cpf << endl;
    cpf; // CPF MARKS AFTER INCREAMENT AND DECREAMENT

    cout <<"***************************************************************************************\n";
    cout<<"                                    RESULT\n";
    cout <<"***************************************************************************************\n";


    result = ++cpf + cpf++ + --mathamatics + ++mathamatics - mathamatics--;

    cout<< left << setw(30) << "result"
        << ": " << result << endl;

return 0;
}