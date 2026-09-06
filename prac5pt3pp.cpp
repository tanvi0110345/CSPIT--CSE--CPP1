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

        //done
        // increasing alphabets.
        for(int j = 1; j <= i; j++) // alphabet print. j <= i cause first row ma only one alphabet.
        {
            cout<< char('A' + j - 1) << " "; //  if 'A' + j to 'B' considerd thate so A will not be printed.        

        }
        // decreasing alphabets.
        for( int j = i - 1; j >= 1; j--) // second tringle means right side.
        {
          cout<< char( 'A' + j - 1) << " ";      
        }
        cout<< endl;
    }
    cout<< endl;
    return 0;
}