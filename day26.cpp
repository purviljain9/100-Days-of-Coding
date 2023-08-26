//Write a program to calculate Maximum number of handshakes
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of people in a room" << endl;
    cin>>n;

    int totalhandshakes = 0;
    for(int i=n-1; i>0; i--){
        totalhandshakes = totalhandshakes + i;
    }
    cout << totalhandshakes << endl;
}

//OTHER METHOD ACCORDING TO THE ARTICLES AVAILABLE ON GOOGLE

// int main()
// {
//     int n;
//     cout << "Enter the number of people in a room" << endl;
//     cin>>n;

//     int total = n*(n-1)/2;
//     cout << total << endl;
// }