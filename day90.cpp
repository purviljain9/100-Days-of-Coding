// Gru has a string S of length N, consisting of only characters a and b for banana and P points to spend.
// Now Gru wants to replace and/or re-arrange characters of this given string to get the lexicographically  
// smallest string possible. For this, he can perform the following two operations any number of times.
// Swap any two characters in the string. This operation costs 1 point. (any two, need not be adjacent)
// Replace a character in the string with any other lower case english letter. This operation costs 2 points.
// Help Gru in obtaining the lexicographically smallest string possible, by using at most P points.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;
    int n,p;
    cin>>n>>p;
    cin>>s; 

    int i=0;
    int j=n-1;

    vector<bool> swap(n);
    while(i<j && p>0){
        while (s[i] =='a' && i<j)
            i++;
        while(s[j] =='b' && i<j)
            j--;
        if(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            swap[j] = true;
            p--;
        }
    }
    for(int i=0; i<n && p>0;i++){
        if(s[i] =='b' && swap[i]){
            s[i] = 'a';
            p--;
        }
        else if(s[i] == 'b' && !swap[i] && p>1){
            s[i] = 'a';
            p -= 2;
        }
    }
    cout << s << endl;
}