#include <iostream>
#include<iomanip>
using namespace std;
int main() {
 string enrollment; // string can store number + charactor; enrollment number like 26TCSD00 can be stores in string.
 char name[20];
 char branch[20];
 int semester;
 long long mobile;

 float mathamatics, physics, cpf;
 float total, average, percentage,result;

 string grade, remark; // grade and remark are in word so we have to use string.
 int choice;

 start: // we use goto with start.

 cout<< "MENU\n";

   cout<< "1. Register New Student."<< endl;
   cout<<"2. Display Student Record."<< endl;
   cout<<"3. Enter Student Marks."<<endl;
   cout<<"4. Display Acadamic Result."<< endl;
   cout<<"5. Exit"<< endl; 

        cout<< "Enter your choice: ";
        cin>> choice;
 switch(choice)
{
    case 1:

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

 cout<< "enter mobile: ";
 cin>> mobile;

 cout<< "Registration done successfully.";

break;

case 2:

cout<< " Enter enrollment: ";
 cin>> enrollment;

 cout<< "Enter name: ";
 cin>> name;

 cout<< "Enter branch: ";
 cin>> branch;

 cout<< "enter semester: ";
 cin>> semester;

 cout<< "enter mobile: ";
 cin>> mobile;

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

    break;

    case 3:

cout<< "************************************************************************************\n";
cout << "                     STUDENT INFORMATION\n";
cout<< "************************************************************************************\n";

 cout<< " mathamatics: ";
 cin>> mathamatics;

 cout<< " physics: ";
 cin>> physics;

 cout<< "cpf: ";
 cin>> cpf;

 cout<< "Marks enter successfully.";

 break;

 case 4:
 
 cout<< " mathamatics: ";
 cin>> mathamatics;

 cout<< " physics: ";
 cin>> physics;

 cout<< "cpf: ";
 cin>> cpf;

total = mathamatics + physics + cpf;
average = total / 3;
percentage = (total/300) * 100;

cout<< "***************************************************************************************\n";
cout<< "                         CALCULATION\n";
cout<< "***************************************************************************************\n";

cout<< left << setw(30) << "total"
    << ": " << total << endl;

cout<< left << setw(30) << "average"
    << ": " << average << endl;

cout << left << setw(30) << "percentage"
     << ": " << percentage << endl;

if( percentage > 90)
{
  grade = "O";
  remark = "outstanding";
}

else if( percentage > 80)
{
    grade = "A+";
    remark = "Exellent";
}
else if( percentage > 70)
{
    grade = "A";
    remark = "Very Good";
}
else if( percentage > 60)
{
    grade = "B+";
    remark = "Good";
}
else if( percentage > 50)
{
    grade = "B";
    remark = "Need to improvment";
}
else if( percentage > 40)
{
    grade = "C";
    remark = "Not good";
}
else 
{
    grade = "F";
    remark = "Failed";
}

cout<< "GRADE: "<< grade << endl;

cout<< "REMARK: "<< remark << endl;

goto start;

case 5:
cout << " Everything is successfully done...! THANK YOU..!!!";

}
return 0;
}




































        