//Write a program to find Number of days in a given month of a given year Description

//Get the number of month and year as input from the user and check the number of days 
//present in that month.
#include<iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter Month" << endl;
    cin>>month;

    int year;
    cout << "Enter Year" << endl;
    cin>>year;

    if(year%4 == 0 && month == 2){
        cout << "29" << endl;
    }
    else if(month == 1 || month == 3 || month == 5 || month == 7 
            || month == 8 || month == 10 || month == 12){
                cout << "31" << endl;
    }
    else if(month == 2){
        cout << "28" << endl;
    }
    else{
        cout << "30" << endl;
    }
}