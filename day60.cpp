// The weather report of Magicland is Good if the number of sunny days in a week is strictly greater than the 
// number of rainy days. Given 7 integers A1,A2,A3,A4,A5,A6,A7 where Ai=1 denotes that the ith day of week in 
// Magicland is a sunny day, Ai=0 denotes that the ith day in Magicland is a rainy day. 
// Determine if the weather report of Magicland is Good or not.
#include<iostream>
using namespace std;
void weathercheck(int arr[])
{
    int count = 0;
    for(int i=0; i<7; i++){
        if(arr[i] == 1){
            count++;
        }
    }

    if(count >= 4){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
int main()
{
    int arr[100];
    cout <<"Enter the sunny and rainy days of a week" << endl;
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    weathercheck(arr);
}