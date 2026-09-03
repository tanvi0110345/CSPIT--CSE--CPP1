#include<iostream>
using namespace std;

int main() {
int n;

cout<< "Enter n: ";
cin>> n;

for( int i = 1; i <= n; i++) // this shows rows.
{
    for( int k = 1; k <= n -i; k++) //  this shows the number of space.

    {
        cout<< "  "; // 2 space for perfect output;
    }

    for( int j = 1; j <= i; j++) // this one print the number as i increament.

    {
        cout<< j << " ";
    }

cout<< endl;


}
return 0;









}