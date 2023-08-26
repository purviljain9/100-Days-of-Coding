//Write a Program to Capitalize the first and last letter of each word of a string
#include<iostream>
using namespace std;
void uppercase(char arr[], int n)
{
    int start = 0;
    int end = n-1;
    
    if(arr[start] >= 'a' && arr[end] <= 'z' && arr[end] >= 'a' && arr[end] <= 'z'){
        arr[start] = arr[start] - 'a' + 'A';
        arr[end] = arr[end] - 'a' + 'A';
    }
    else if(arr[start] >= 'a' && arr[end] <= 'z'){
        arr[start] = arr[start] - 'a' + 'A';
    }
    else{
        arr[end] = arr[end] - 'a' + 'A';
    }

}
int main()
{
    char arr[100];
    cout << "Enter a String" << endl;
    cin>>arr;
    int i=0;
    while(arr[i] != '\0')
        i++;
    uppercase(arr, i);
    cout << arr << endl;
}