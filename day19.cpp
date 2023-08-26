//Write a program to identify if the number is Armstrong number or not Description
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;
    int num = n;
    int count = 0;
    int sum = 0;

    while(n!=0){
        int digit = n%10;
        count++;
        n=n/10;
    }

    int number = num;
    while(num!=0){
        int d = num%10;
        sum = sum + pow(d, count);
        num=num/10;
    }
    if(sum==number){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "Not an Armstrong number" << endl;
    }
}