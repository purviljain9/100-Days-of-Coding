// Balancing Weight
// No play and eating all day makes your belly fat. This happened to Manish during the lockdown. 
// His weight before the lockdown was w1 kg (measured on the most accurate hospital machine) and after M 
// months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), 
// he got the result that his weight was w2 kg (w2>w1).
// Scientific research in all growing kids shows that their weights increase by a value between x1 and x2 kg 
// (inclusive) per month, but not necessarily the same value each month. Manish assumes that he is a growing kid.
//  Tell him whether his home scale could be giving correct results.
#include<iostream>
using namespace std;
int checkresults(int w1,int w2,int x1,int x2,int m)
{
    int w3 = w2 - w1;
    if((x1*m) <= w3 && w3 <= (x2*m)){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int w1,w2,x1,x2,m;
    cout <<"Enter the values of w1,w2,x1,x2 and m" << endl;
    cin>>w1>>w2>>x1>>x2>>m;

    cout << checkresults(w1,w2,x1,x2,m) << endl;
}