// Blobo2 is in his practical exam. The teacher gave him a permutation A of N integers.
// The teacher has allowed Blobo2 to make a certain type of operation on the permutation. In one operation, he can:
// Apply left shift on the permutation. In other words, he can take the first element of the permutation and move it to 
// the back of the permutation.The teacher has asked Blobo2 to find the lexicographically smallest permutation possible 
// after applying any (possibly zero) number of given operations. Since Blobo2 wants to impress his teacher, he 
// decided to perform at most two swaps in addition to the allowed operation.Find the lexicographically smallest 
// possible permutation Blobo2 can generate after applying at most two swaps and any number of given operations.
#include<iostream>
#include<vector>
using namespace std;
int swp(vector<int>& a, vector<int>& p, int x, int idx) {
	if(a[idx] == x) return 0;
	a[p[x]] = a[idx];
	p[a[idx]] = p[x];
	a[idx] = x;
	p[x] = idx;
	return 1;
}
void grd(vector<int>& a, vector<int>& p, vector<int>& ret, vector<int>& retp, int n, int swp_cnt) {
	for(int i=0;i<n;i++)
		ret[i] = a[(p[1]+i)%n];
	for(int i=0;i<n;i++) 
        retp[ret[i]] = i;
	int i = 0;
	while(swp_cnt && i < n) {
		if(ret[i] != i+1) {
			ret[retp[i+1]] = ret[i];
			retp[ret[i]] = retp[i+1];
			ret[i] = i+1;
			retp[i+1] = i;
			swp_cnt--;
		}
		i++;
	}
}
vector<int> comp_ans(vector<int> ans1, vector<int> ans2, int n) {
	for(int i=0;i<n;i++) {
		if(ans1[i] < ans2[i]) return ans1;
		if(ans1[i] > ans2[i]) return ans2;
	}
	return ans1;
}
void solve() {
	int n; cin >> n;
	vector<int> a(n);
	vector<int> p(n+1);
	for(int i=0;i<n;i++) {
		cin >> a[i];
		p[a[i]] = i;
	}
	if(n <= 3) {
		for(int i=1;i<=n;i++) 
			cout << i << ' ';
		cout << endl;
		return;
	}
	vector<int> ans(n), pans(n+1);
	vector<int> ansans(n), pansans(n+1);
	grd(a, p, ans, pans, n, 2);
	for(int i=0;i<n;i++) {
		if(i == p[1]) 
			continue;
		int tmp = p[1];
		swp(a, p, 1, i);
		if(a[(i+1)%n] == 2) {
			grd(a, p, ansans, pansans, n, 1);
			ans = comp_ans(ans, ansans, n);
		}
		else {
			int tmp2 = p[2];
			swp(a, p, 2, (i+1)%n);
			if(a[(i+2)%n] == 3) {
				grd(a, p, ansans, pansans, n, 0);
				ans = comp_ans(ans, ansans, n);
			}
			swp(a, p, 2, tmp2);
		}
		swp(a, p, 1, tmp);
	}
	for(int i=0;i<n;i++) cout << ans[i] << ' ';
	cout << endl;
}
int main(){	
	int t; 
    cin >> t;
	for(int tc=1;tc<=t;tc++) 
		solve();
}