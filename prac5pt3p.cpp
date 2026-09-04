#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout<< "Enter n: ";
    cin>> n;

    for(int i = 1; i <= n; i++) // loop execution.
    {
        // print spaces.
        for(int j = 1; j <= n - i; j++) // spaces
        {
            cout<< "  ";
        }
        // increasing numbers
        for(int j = 1; j <= i; j++) // j print.
        {
            cout<< j << " ";
        }
        // decreasing numbers.
        for( int j = i - 1; j >= 1; j--) // second tringle means right side.
        {
          cout<< j << " ";      
        }
        cout<< endl;
    }
    cout<< endl;
    return 0;
}