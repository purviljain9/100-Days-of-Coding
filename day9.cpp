//Write a program to find Number of digits in an integer Description

//Take an integer as the input from the user and then calculate 
//the number of digits in the given input and print it as the output.

#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin>>a;

    int count = 0;
    while(a!=0){
        if(a%10 > INT64_MIN){
            count++;
            a=a/10;
        }
    }
    cout << count << endl;
}

//TAELNT BATTLE SOLUTION
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin>>a;

    int count = 0;
    if(a == 0){
        cout << "1" << endl;
    }
    else{
        while(a!=0){
            a=a/10;
            count++;
        }
    } 
    cout << count << endl;
}













//METHOD:1 FOR LONG POSITIVE NUMBERS ANS THEIR COUNT
// int main()
// {
//     long long int a;
//     cout << "Enter a number" << endl;
//     cin>>a;

//     long long int count = 0;
//     long long int sum = 0;
//     while(a!=0){
//         if(a%10>-1){
//             sum = sum + a%10;
//             count++;
//             a=a/10;
//         }
//     }
//     cout << count << endl;
//     cout << sum << endl;
// }


//METHOD:2 FOR POSITIVE NUMBERS ANS THEIR COUNT
// int main()
// {
//     int a;
//     cout << "Enter a number" << endl;
//     cin>>a;

//     int count = 0;
//     int sum = 0;
//     while(a!=0){
//         if(a%10>-1){
//             sum = sum + a%10;
//             count++;
//             a=a/10;
//         }
//     }
//     cout << count << endl;
//     cout << sum << endl;
// }



//METHOD 3: FOR ANY INTEGER NUMBER AND THEIR COUNT(FOR LONG NUMBER JUST ADD THE DATA TYPE:LONG LONG)
// int main()
// {
//     int a;
//     cout << "Enter a number" << endl;
//     cin>>a;

//     int count = 0;
//     int sum = 0;
//     while(a!=0){
//         if(a%10> INT64_MIN){
//             sum = sum + a%10;
//             count++;
//             a=a/10;
//         }
//     }
//     cout << count << endl;
//     cout << sum << endl;
// }