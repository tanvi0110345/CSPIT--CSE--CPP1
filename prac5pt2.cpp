#include<iostream>
using namespace std;
int main() {

for( int i = 1; i <= 5; i++) // it is same for every rows.
{
    for( int j = 1; j <= i; j++) // here condition of j will change otherwise everything will be same.
    {
        cout<< j << " "; // if we want to printout number than j otherwise  for character we use 'A' , '*' and so on.
    }
    cout<< endl;
}
return 0;
}