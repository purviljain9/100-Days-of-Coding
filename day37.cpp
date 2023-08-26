//Write a Program to calculate the Frequency of characters in a string
#include<iostream>
#include<string.h>
using namespace std;
void frequency(char arr[])
{
    for(int i=0; i<strlen(arr); i++){
        int count = 0;
        for(int j=0; j<strlen(arr); j++){
            if(i>j && arr[i] == arr[j]){
                break;
            }
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count!=0){
            cout << "The frequency of " << arr[i] << " is " << count << endl;
        }
    }
}

int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;

    frequency(arr);
}