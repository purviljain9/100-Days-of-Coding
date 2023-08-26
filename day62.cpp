// Gold Mining
// Anusree has decided to go to a gold mine along with N of his friends (thus, total N+1 people including 
// Anusree go to the gold mine).
// The gold mine contains a total of X kg of gold. Every person has the capacity of carrying up atmost 
// Y kg of gold.
// Will Anusree and his friends together be able to carry up all the gold from the gold mine assuming 
// that they can go to the mine exactly once.
#include<iostream>
using namespace std;
void goldcarry(int n, int x, int  y)
{
    int totalcapacity = y*(n+1);

    if(totalcapacity < x){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}

int main()
{
    int n;
    int x;
    int y;
    cout << "Enter the number of friends of Anusree, amount of gold and capacity of carrying gold by each friend" << endl;
    cin>>n>>x>>y;

    goldcarry(n, x, y);
}