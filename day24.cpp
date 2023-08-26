//Write a program to print Pyramid pattern using stars
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number" << endl;
    cin>>n;

    int k = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i+k; j++){
            cout << "*";
        }
        k+=1;
        cout << endl;
    }


    
    //BY USING WHILE LOOP>>>>>>>>>>>

    // int i = 1;
    // int k = 0;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=i+k){
    //         cout << '*';
    //         j++;
    //     }
    //     k = k+1;
    //     cout << endl;
    //     i++;
    // }


    //BY INITIALIZING I AND J WITH 0>>>>>>>>>

    // int k = 1;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+k; j++){
    //         cout << '*';
    //     }
    //     k+=1;
    //     cout << endl;
    // }
}