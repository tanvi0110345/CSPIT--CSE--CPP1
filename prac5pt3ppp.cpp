#include<iostream>
using namespace std;
int main() 
{
    int n;
    float marks, sum = 0, average;
    cout<< "Enter numbers of employes: ";
    cin>> n;

    for( int i = 1; i <= n; i++)
    {
        cout<< "enter training assessment of employee: "<< i << ": "<< " ";
        cin>> marks;
        sum = sum + marks;
    }
    average = sum / n;

    cout<< "training total score: "<< sum<< endl;
    cout<< "average training score : "<< average<<endl;
    cout<< endl;
    return 0;


}