//Write a program to find the double of the given number without using arithmetic operator
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the  Number" << endl;
    cin>>n;

    //HERE WE HAVE USED SHIFTING OPERATERS WHICH SHIFTS THE BITS(BINARY NUMBER) BY GIVEN VALUE 
    //HERE IT IS 1 i.e. IN CASE 0F 3 (0011) BY SHIFTING IT LEFT BY 1 IT BECOMES 6(0110).
    int ans = n<<1;
    cout << ans << endl;
}