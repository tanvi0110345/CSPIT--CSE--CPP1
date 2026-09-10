#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;

    //Arrays.
    string participateID[100], participateName[100];
    int score[100];

    //  variable for analysis.
    int totalScore = 0, highestScore, lowestScore;
    float averageScore;

cout<< "******************************************************************************\n";
cout<< "                SPORTS EVENT SCORE ANALYSIS RECORD.\n";
cout<<"*******************************************************************************\n";

// enter participation id and name.

cout<< "\nEnter number of participate: "; // number of participate.
cin>> n;

for(int i = 0; i < n; i++) // it will take input of participate  such as name, id and score.
{

    cout<< "Enter participateID: ";
    cin>> participateID[i];

    cout<< "Enter participateName: ";
    cin>> participateName[i];

    cout<< "Enter score: ";
    cin>> score[i];


}



// initilization of highest and lowest.

highestScore = score[0];
lowestScore = score[0];

// calculation of total & highest - lowest.

for(int i = 0; i < n; i++)
{

    totalScore = totalScore + score[i];
if( score[i] > highestScore) // it will check all array values with initilized hifghest lowest score.
{
    highestScore = score[i];
}
if(score[i] < lowestScore)
{
    lowestScore = score[i];
}

}
averageScore = float(totalScore) / n;
cout<< "averageScore: " << averageScore << endl;

//Display participant records.
cout<< "\n*********************************************************************************"<< endl;
cout<< "          PARTICIPANT PERFORMANCE\n";
cout<< "*********************************************************************************\n"<< endl;

cout<< left << setw(12) << "ID"
    << setw(20) << "NAME"
    << setw(10) <<"Score" << endl;

    cout<< "-----------------------------------------------------------------------------------\n";

    for(int i = 0; i < n; i++)
    {
        cout<< left << setw(12) << participateID[i]
            << setw(20) << participateName[i]
            << setw(10) << score[i] << endl;

    }
    cout<< "------------------------------------------------------------------------------------\n";

    // Display Analysis.

    cout<< "\n**************************  SCORE ANALYSIS  ************************************" << endl;

    cout<< "TotalScore    : " << totalScore << endl;
    cout<< "HighestScore  : " << highestScore << endl;
    cout<< "LowestScore   : "<< lowestScore << endl;
    cout<< "AverageScore  : "<< averageScore << endl;

cout<< "********************************************************************************************\n";
return 0;

}