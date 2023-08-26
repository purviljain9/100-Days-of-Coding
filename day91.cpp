// Sridhar was a seasoned traveler. He liked to visit new places. More than all he was a meticulous planner. 
// This time he was planning to visit Europe. He wrote down his travel itinerary like as follows:
// If he wanted to visit Madrid, Paris, Munich, Warsaw and Kiev in this order, he would write it down like as:
// Madrid Paris 100
// Paris Munich 200
// Munich Warsaw 150
// Warsaw Kiev 120
// More formally, if he wanted to go from A to B directly and the price is C dollars, then he would write A B C
// on a card. Each move was written on a different card. Sridhar was a great planner, so he would never visit the
// same place twice. Just before starting his journey, the cards got shuffled. Help Sridhar figure out the actual
// order of the cards and the total cost of his journey.
#include<iostream>
#include<set>
#include<map>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    map<string,string> nxt, cst;
    map<string,long long> cnt;
    set<string> s;
    long long ans = 0;
    for (long long i=1;i<n;i++){
        string a,b,c;
        cin >> a >> b >> c;
        long long cost = stoll(c);
        ans += cost;
        nxt[a] = b;
        cst[a] = c;
        cnt[b]++;
        s.insert(a);
    }
    string cur="";
    for (auto i : s){
        if (!cnt[i])
            cur=i;
    }
    n--;
    while(n--){
        cout << cur << " " << nxt[cur] << " " << cst[cur] << endl;
        cur = nxt[cur];
    }
    cout << ans << endl;
}