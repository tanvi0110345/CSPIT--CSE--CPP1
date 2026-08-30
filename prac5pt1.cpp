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

  // we use goto with start. like start: and last goto.

cout<< "*************************************************************************************\n";
cout<< "                              STUDENT  RECORD MANAGMENT SYSTEM\n";
cout<< "*************************************************************************************\n";


do {
 
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
    choice = 'Y';
    while(choice == 'Y' || choice == 'y')
    {


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
    

 cout<< "Registration done successfully.\n";

 
cout<< "\nSTUDENTS INFORMATION\n";

cout<< left << setw(30) << "enrollment number"
     << ": " << enrollment << endl;

cout<< left << setw(30) << "name"
    << ": " << name << endl;

cout<< left << setw(30) << "branch"
    << ": " << branch   << endl;

cout<< left << setw(30) << "semester"
    << ": " << semester << endl;

 cout<< "\n\nRegistration Another Student (Y/N): ";
 cin>> choice;
    }
 break;

 //===========================================================
 // option 2: display students record:
 //============================================================

case 2:

cout<< "************************************************************************************\n";
cout<<"                       STUDENT RECORD\n";
cout<< "************************************************************************************\n";
 
cout<<"Enrollment number: "<<enrollment<<endl;
cout<<" students name: "<< name<<endl;
cout<< " branch: "<<branch<<endl;
cout<<" semester: "<< semester<<endl; 
 
//cout<< left << setw(30) << "enrollment number"
    // << ": " << enrollment << endl;

//cout<< left << setw(30) << "name"
   // << ": " << name << endl;

//cout<< left << setw(30) << "branch"
   // << ": " << branch   << endl;

//cout<< left << setw(30) << "semester"
   // << ": " << semester << endl;

    break;

    //==========================================================================
    // OPTION 3: ENTER STUDENTS MARKS;
    //==========================================================================

    case 3:

cout<< "************************************************************************************\n";
cout << "                     STUDENT INFORMATION\n";
cout<< "************************************************************************************\n";

 //cout<< " mathamatics: ";
 //cin>> mathamatics;

 //cout<< " physics: ";
 //cin>> physics;

 //cout<< "cpf: ";
 //cin>> cpf;
 total = 0; // we have to use for loop here that's why we comment out that cout and cin functions.
 int marks,n;
 float average;
 
 cout<< "Enter marks of subject n: ";
 cin >> n;

 for(int i = 1; i <= n; i++)
 {
    cout<< "Marks of subject: "<<i<< ": ";
    cin>> marks;
 
total = total + marks;
 }

cout<< "total: "<<total<< endl;

 cout<< "Marks enter successfully.\n";

//average = total / n;
//percentage = (total / ( n * 100)) * 100;
//cout<< endl;

//cout<< "total: "<<total<< endl;
//cout<< "average: "<<average<< endl;
//cout<< "percentage: "<<percentage<< endl;
 


 cout<< "Marks entered successfully.";

 break;
//===================================================
// OPTION 4: STUDENT ACADAMIC RESULT:
//==================================================
 case 4:


average = total / n;
percentage = (total / ( n * 100)) * 100;
cout<< endl;

cout<< "average: "<<average<< endl;
cout<< "percentage: "<<percentage<< endl;

cout<< "******************************************************************************\n";
cout<< "                             PASS and FAIL\n";
cout << "******************************************************************************\n";

if( percentage >= 40)
{
    cout<< "Result: PASSED"<< ": "<<percentage<< endl;
    cout<< "CONGRATULATIONS!!! You have successfully passed.";

}
else if( percentage < 40)
{
    cout<< "Result: FAILED"<< ": "<<percentage<< endl;
    cout << "Better luck next time.";
}


if( percentage >= 90)
{
  grade = "O";
  remark = "outstanding";
}

else if( percentage >= 80)
{
    grade = "A+";
    remark = "Exellent";
}
else if( percentage >= 70)
{
    grade = "A";
    remark = "Very Good";
}
else if( percentage >= 60)
{
    grade = "B+";
    remark = "Good";
}
else if( percentage >= 50)
{
    grade = "B";
    remark = "Need to improvment";
}
else if( percentage >= 40)
{
    grade = "C";
    remark = "Not good";
}
else 
{
    grade = "F";
    remark = "Failed";
}
cout<<"\n***********ACADAMIC RESULT*************************\n";

cout<< "total: "<< total <<endl;
cout<< "average: "<< average << endl;
cout<< "percentage: "<<percentage << "%" <<endl;
cout<< "GRADE: "<< grade << endl;
cout<< "REMARK: "<< remark << endl;

break;

case 5: /* exit */
cout << " Everything is successfully done...! THANK YOU..!!!";


 default:
 cout<< "\nInvalide choice!! Please try again..!!";
}
}
while( choice != 5);


return 0;
}





































        