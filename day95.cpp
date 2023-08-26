// Kulyash is given an integer N. His task is to break N into some number of (integer) powers of 2.
// To achieve this, he can perform the following operation several times (possibly, zero):
// Choose an integer X which he already has, and break X into 2 integer parts (Y and Z) such that X=Y+Z.
// Find the minimum number of operations required by Kulyash to accomplish his task.
#include <iostream>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        if(n%2)
            count++;
        n=n/2;
    }
    cout<<count-1<<endl;
}