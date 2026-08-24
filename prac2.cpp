#include<iostream>
using namespace std;
int main() {
    // addition,subtraction,multiplication, division,modulus of 2 numbers.

    int a, b;
    int addition, subtraction, multiplication, division, modulus;

    cout<< "Enter a: ";
    cin>> a;

    cout<< "Enter b: ";
    cin>> b;

    addition = a + b;
    cout<< "addition: "<< addition<< endl;

    subtraction = a - b;
    cout<< "Subtraction: "<< subtraction<< endl;

    multiplication = a * b;
    cout<< "Multiplication: "<< multiplication<< endl;

    division = a / b; // if b != 0.
    cout<< "division: "<< division<< endl;

    modulus = a % b;
    cout<< "modulus: "<< modulus<< endl;


    return 0;
}