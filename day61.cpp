// Chess Format 
// Given the time control of a chess match as a+b, determine which format of chess out of the given 4 it belongs to.
// 1) Bullet if a+b<3, 2) Blitz if 3≤a+b≤10
// 3) Rapid if 11≤a+b≤60, 4) Classical if 60<a+b
#include<iostream>
using namespace std;
int checkformat(int a, int b)
{
    if(a+b < 3){
        return 1;
    }
    else if(3 <= a+b  &&  a+b <= 10){
        return 2;
    }
    else if(11 <= a+b &&  a+b <= 60){
        return 3;
    }
    else{
        return 4;
    }
}

int main()
{
    int a;
    int b;
    cout <<"Enter the values of a & b" << endl;
    cin>>a>>b;

    cout << checkformat(a, b) << endl;
}