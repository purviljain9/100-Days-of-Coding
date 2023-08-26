//Write a Program to check if two strings are Anagram or not
#include<iostream>
#include<string.h>
using namespace std;
void Anagram(char arr1[], char arr2[])
{
    for(int i=0; i<strlen(arr1); i++){
        for(int j=i+1; j<strlen(arr1); j++){
            if(arr1[i] > arr1[j]){
                swap(arr1[i], arr1[j]);
            }
        }
    }

    for(int i=0; i<strlen(arr2); i++){
        for(int j=i+1; j<strlen(arr2); j++){
            if(arr2[i] > arr2[j]){
                swap(arr2[i], arr2[j]);
            }
        }
    }

    int ans = strcmp(arr1, arr2);

    if(ans == 0){
        cout << "Anagram" << endl;
    }
    else{
        cout << "Not Anagram" << endl;
    }
}

int main()
{
    char arr1[100];
    cout << "Enter first string" << endl;
    cin>>arr1;

    char arr2[100];
    cout << "Enter second string" << endl;
    cin>>arr2;

    Anagram(arr1, arr2);
}





// if(strlen(arr1) > strlen(arr2) || strlen(arr1) < strlen(arr2)){
//         return false;
//     }
//     int count = 0;
//     for(int i=0; i<strlen(arr1); i++){
//         for(int j=0; j<strlen(arr2); j++){
//             if(arr1[i] == arr2[j]){
//                 arr2[j] = 0;
//             }
//             return false;
//             if(arr1[i] ==  0){
//                 return false;
//             }
//         }
//     }
//     return true;