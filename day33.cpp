//Write a Program to check if String is a palindrome or not
#include<iostream>
using namespace std;

//IF THE GIVEN STRING IS NOT CASE SENSITIVE
// void uppertolower(char arr[])
// {
//     int i=0;
//     while(arr[i] >= 'A' && arr[i] <= 'Z'){
//         arr[i] = arr[i] - 'A' + 'a';
//         i++;
//     }
// }

bool checkpalindrome(char arr[], int n)
{
    int s = 0;
    int e = n-1;
    while(s <= e){
        if(arr[s] == arr[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;

    int i=0;

    while(arr[i] != '\0'){
        i++;
    }

    //IF THE GIVEN STRING IS NOT CASE SENSITIVE
    // uppertolower(arr);

    if(checkpalindrome(arr, i)){
        cout << "The given string is a Palindrome" << endl;
    }
    else{
        cout << "The given string is not a Palindrome" << endl;
    }
}
