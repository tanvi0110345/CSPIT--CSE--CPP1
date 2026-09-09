#include<iostream>
using namespace std;

int main()
{
 int number, numbers;
 int count = 0;
 int sum = 0;
 float average;

 cout<< "Enter positive integers."<< endl;
 cin>> numbers;

 cout<< "Enter 0 or a negative number to stop."<< endl;

 while( numbers > 0)
{
    cout<< "Enter a number: ";
    cin>> number;
    if (number <= 0)
    break;
    sum = sum + number;
    count++;
    number--;
}
// DISPLAY THE RESULT.
cout<< "=================================================================\n";
cout<<" COUNT OF NUMBERS = "<< count << endl;
cout<<"Sum: "<<sum;

if(count > 0)
{
    average = (float)sum / count;
    cout<< "\nAverage = " << average;

}
else
{
    cout<< "\nAverage = 0";
}
cout<< endl;
return 0;



}