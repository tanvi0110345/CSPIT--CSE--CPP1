#include <iostream>                    // it has declaration of cin & cout.
#include<iomanip>
using namespace std;
int main() {                          // the execution of program will start from main function.
 string enrollment;                  // string can store number + name.
 char name[20];                     // single charecter in single qoute.
 char branch[20];
 int semester;                     // it can store whole number.
 char gender[05];
 char bloodgroup[05];
 char dob[20];

 int n;
 // some calculation

 float mathamatics, physics, cpf;    // float can store decimal values. such as 3.14 , 12.3 ,...!
 float total, average, percentage;

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

 cout<< " mathamatics: ";
 cin>> mathamatics;

 cout<< " physics: ";
 cin>> physics;

 cout<< "cpf: ";
 cin>> cpf;

 // calculation

 total = mathamatics + physics + cpf;
 average = total / 3;
 percentage = (total/300) * 100;

 cout<< "************************************************************************************\n";
 cout<<"                       STUDENT ACADAMIC REPORT\n";
 cout<< "************************************************************************************\n";
 
 cout<< left << setw(30) << "enrollment number"        // left tell the computer that display output from left side.
     << ": " << enrollment << endl;                    // setw(30) means 30 charecter will be stored in output.

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
cout<< endl;
return 0;                      // successfull termination.
}