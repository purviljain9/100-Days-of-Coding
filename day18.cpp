//Write a program to Add two fractions Description
//Get the values for numerator and denominator of two fractions, then add that fractions.
#include<iostream>
using namespace std;
int main()
{
    int x1, y1;
    cout << "Enter numerator and denominator of first fraction" << endl;
    cin>>x1;
    cin>>y1;
    
    int x2, y2;
    cout << "Enter numerator and denominator of second fraction" << endl;
    cin>>x2;
    cin>>y2;
    
    int gcd = -1;
    int x3 = (x1*y2)+(y1*x2);
    int y3 = (y1*y2);

    for(int i=1; i <= x3 && i <= y3; i++){
        if(x3%i==0 && y3%i==0){
        gcd = i;
        }
    }

    cout << x3/gcd << "/" <<y3/gcd;
}