// Bricks Breaking
// For her next karate demonstration, Arunima will break some bricks.
// Arunima stacked three bricks on top of each other. Initially, their widths (from top to bottom) are W1,W2,W3.
// Arunima strength is S. Whenever she hits a stack of bricks, consider the largest k≥0 such that the sum of widths 
// of the topmost k bricks does not exceed S; the topmost k bricks break and are removed from the stack. 
// Before each hit, Arunima may also decide to reverse the current stack of bricks, with no cost.
// Find the minimum number of hits Arunima needs in order to break all bricks if she performs the reversals optimally. 
#include<iostream>
using namespace std;
int minimumhits(int s, int w1, int w2, int w3)
{
    if(w1 + w2 + w3 <= s){
        return 1;
    }
    else{
        if(w1 + w2 <= s || w2 + w3 <= s){
            return 2;
        }
        else{
            return 3;
        }
    }
}
int main()
{
    // int s,w1,w2,w3;
    // cout <<"Enter the strength and 3 widths of each brick" << endl;
    // cin>>s>>w1>>w2>>w3;

    // cout << minimumhits(s, w1, w2, w3) << endl;

    cout << 'a' - 'a' + 'a' << endl;
}