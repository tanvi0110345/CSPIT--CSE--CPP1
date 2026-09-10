#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    
    int choice;
    int  price;
    string bookname, name, id;
    // name must be declare in string and string has number + alphabets.
    do {
    cout<<"\n-----------------------------------------------------------------------------------\n";
    cout<<"                                 MENU\n";
    cout<<"-----------------------------------------------------------------------------------\n";

    cout<<"1. ADD BOOK DETAILS." << endl;
    cout<<"2. DISPLAY BOOK DETAILS." << endl;
    cout<<"3. ISSUE A BOOK." << endl;
    cout<<"4. RETURN A BOOK." << endl;
    cout<< "5. EXIT."<< endl;

    cout<< "ENTER YOUR CHOICE: ";
    cin>> choice;

    switch(choice)
    {
        case 1:
        cout<< " ENTER BOOK NAME: ";
        cin>> bookname;

        cout<< " ENTER BOOK AUTHOR'S NAME: ";
        cin>> name;

        cout<< " ENTER BOOK'S PRICE: ";
        cin>> price;
        break;

        case 2:

        cout<< " ENTER BOOK NAME: ";
        cin>> bookname;

        cout<< " ENTER BOOK AUTHOR'S NAME: ";
        cin>> name;

        cout<< " ENTER BOOK'S PRICE: ";
        cin>> price;

        cout<< "BOOK NAME: "<<bookname<< endl;
        cout<< "BOOK'S AUTHOR NAME: "<<name<< endl;
        cout<< "PRICE: "<< price << endl;
                     break;
        case 3:
        
        cout<< "ENTER THE ID OF ISSUE BOOK: ";
        cin>> id;

        cout<< "ID OF ISSUE BOOK: " << id << endl;

                     break;
        case 4:

        cout<< "ENTER THE ID OF RETURN BOOK: ";
        cin>> id;

        cout << "id of return book: " << id << endl;
        break;

        case 5:
        cout<< "THANK YOU SO MUCH..!!\n";
        break;

        default:
        cout<< "INVALID CHOICE..!";


    }

}
    while( choice <= 5);

return 0;

}