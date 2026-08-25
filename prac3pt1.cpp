#include<iostream>
using namespace std;
int main() {
// swap of two numbers.
// we have to declare new variable to swap the value.
// = is assignment operator, it will assign the value to a variable..!

int a, b,temp;
cout<< "Enter a: ";
cin>> a;

cout<< "Enter b: ";
cin>> b;

temp = a;
a = b;
b = temp;

// display a & b after swap the numbers.
cout<< "After swaping a: "<< a<< endl;
cout<< "After swaping b: "<< b<< endl;
return 0;
}