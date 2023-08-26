//Write a Program to Count the sum of numbers in a string
#include<iostream>
using namespace std;
int digitsum(char arr[])
{
    int i=0;
    int sum = 0;
    while(arr[i] != '\0'){
        if(arr[i] >= '1' && arr[i] <= '9'){
            sum = sum + (arr[i] - 48);
        }
        i++;
    }
    return sum;
}

int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;

    cout << "The sum of the numbers present in string is " << digitsum(arr) << endl;
}