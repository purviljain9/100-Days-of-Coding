// Kekocity's population consist of N gnomes numbered with unique ids from 1 to N. As they are very joyful gnomes,
// they usually send jokes to their friends right after they get any (even if they knew it before) via their social
// network named as Mybeard. Mybeard became popular in the city because of message auto-deletion. It takes exactly one minute 
// to read and resend joke to mates.Mayor of Kekocity, Mr. Shaikhinidin, is interested in understanding how the 
// jokes are spread. He gives you database of Mybeard social network, and wants you to answer some queries on it.
// You will be given a list of friends for every gnome and M queries of the following type: Who will receive a 
// message with joke after exactly K minutes, if the creator of joke was gnome with id x?
#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
const long long INF=2e18;
const int inf = 1e9;
const int N = 5e4+210;
const int M = 6e2+20;
int n,m;
bitset<M>g[31][M];
void solve(){
	cin>>n;
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			int x;
			cin>>x;
			g[0][i][j]=x;
		}
	}cin>>m;
	for(int d=1; d<31; ++d){
		for(int i=1; i<=n; ++i){
			for(int j=1; j<=n; ++j){
				if(g[d-1][i][j]==0)continue;
				g[d][i]|=g[d-1][j];
			}
		}
	}
	while(m--){
		int k,x;
		cin>>k>>x;
		bitset<M> l;
		l[x]=1;
		for(int i=0; i<=30; ++i){
			if(k&(1<<i)){
				bitset<M>r;
				for(int j=1; j<=n; ++j) if(l[j]==1) r|=g[i][j];
				l=r;
			}
		}if(l.count()==0){
			cout<<0<<endl<<-1<<endl;
			continue;
		}cout<<l.count()<<endl;
		for(int j=1; j<=n; ++j){
		    if(l[j]==1){
		        cout<<j<<' ';
		    }
		}cout<<endl;
	}
}

int main()
{
	solve();
}