#include<iostream>
using namespace std;
int main() 
{
int square,cube,a;
int choice;


do{
cout<< "\nMENU\n";
cout<< "1. square of number.\n";
cout<< "2. cube of number.\n";
cout<< "3. even or odd number.\n";
cout<< "4. Exit.\n";

cout<< "Enter your choice: ";
cin>> choice;


switch(choice) 
{
case 1: 
cout<< "Enter a: ";
cin>> a;
square = (a) * (a);

cout<< "square:  " << square <<endl;
break;

case 2:

cout<< "Enter a: ";
cin>> a;

cout<< "cube: " << (a) * (a) * (a) <<endl;
//cout<< "Cube: "<< cube;
break;

case 3:
cout<< "Enter a: ";
cin>> a;

if( a % 2 == 0)
{
    cout<< a << " "<< "Even number"<< endl;
}
else
{
    cout<< a << " "<< "Odd number"<< endl;
}

break;

case 4:

cout<< "Exiting the program";
break;

default:
cout<< "Invalid choice!! pls try again."<<endl;
}
}

while(choice <= 4);
return 0;

}























