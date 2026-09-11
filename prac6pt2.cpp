#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    // one dimentional array.

    string participantID[100];
    string participantName[100];
    int score[100];

    // variable for searching and sorting array.

    int n;
    string searchID;
    int found = -1; // searchid is not found so we have to declare -1 cause it's not a valid index.
    int tempScore;
    string tempName;
    string tempID;

    cout<<"\n************************************************************************************"<< endl;
    cout<< "                          SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"************************************************************************************"<< endl;

    // accept the number of participant,

    cout<< "Enter number of participants: ";
    cin>> n;
    for(int i = 0; i < n; i++)
    {
       cout<< "ParticipantID: ";
       cin>> participantID[i];

       cout<< "ParticipantName: ";
       cin>> participantName[i];

       cout<< "score: ";
       cin>> score[i];

    }

    cout<<"******************     SEARCH PARTICIPANT   *********************************\n";


    cout<< "Enter searchID: ";
    cin>> searchID;
    
    for(int i = 0; i < n; i++)
    {
        if(participantID[i] == searchID)
        {
            found = i;    // je number ni id hase te i print thase.
            break;
        }
    }

        if(found != -1)   // means id is found.
        {
            cout<<"\n--------------------------------------------------------------------"<< endl;
            cout<< "\n             PARTICIPANT FOUND\n";
            cout<<"\n--------------------------------------------------------------------"<< endl;
            
            cout<< "ID    : "<< participantID[found] << endl;  // found ni value 
            cout<< "Name  : "<< participantName[found] << endl;
            cout<< "score : "<< score[found] << endl;

            //   jo i lakhe to computer ne khabar na pare ke kayo i levo chhe so je found levu.

        }
        else
        {
            cout<<"\nParticipant with ID "<< searchID 
                << "not found." << endl;
        } 
         //============================================================================================;
        // sort record in descending oreder of score.
        //=============================================================================================;
        for(int i = 0; i < n - 1; i++)
        {
            for( int j = 0; j < n - 1; j++)
            {
                if(score[j] < score[j + 1])
                {
                    // swap scores.
                    tempScore = score[j];
                    score[j] = score[j + 1];
                    score[j + 1] = tempScore;

                    // swap IDs

                    tempID = participantID[j];
                    participantID[j] = participantID[ j + 1];
                    participantID[ j + 1] = tempID;

                    // swap names.

                    tempName = participantName[j];
                    participantName[j] = participantName[ j + 1];
                     participantName[ j + 1] = tempName;

                }
            }
        }
    // ---------------------------------------------------------------------------------------------------------------------------

    cout<<"-------------------------------------------------------------------\n";
    cout<<"                Ranking List\n";
    cout<<"-------------------------------------------------------------------\n";

    cout<< left << setw(8) << "Rank"
        << setw(20) << "Name"
        << setw(10) << "Score" << endl;

    cout<<"--------------------------------------------------------------------\n";
    
    
    for(int i = 0; i < n; i++)
    {
        cout<< left << setw(8)<< participantID[i]
                    << setw(20) << participantName[i]
                    << setw(20) << score[i] << endl;


    }

    cout<< "------------------------------------------------------------------------\n";
    cout<< "TOP - 3 PERFORMANCE.\n";
    cout<< "------------------------------------------------------------------------\n";

    int first = 0, second = 0, third = 0;
    for(int i = 0; i < n; i++)
    {
        if(score[i] > first) 
        
        /* i = 0 so a[0] = let's we take 50 then
        50 > 0
        so first = 50 and first ni old value 0 e second ne malse and second ni old value 0 e third ne,
         then i++ so i = 1 mate loop again run thase.*/

        {
            third = second;
            second = first;
            first = score[i];

        }
        else if(score[i] > second)
        {
            third = second;
            second = score[i];

        }
        else if(score[i] > third)
        {
            third = score[i];
        }
    }

    cout<< "TOP 3 PERFORMANCE\n";
    cout<< "1st: " << first << endl;
    cout << "2nd: " << second << endl;
    cout<< "3rd: "<< third << endl;
    cout<< endl;
    return 0;

}