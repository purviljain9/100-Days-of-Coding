// Here is a hallway of length N−1 and you have M workers to clean the floor. Each worker is responsible for 
// segment [Li?,Ri?], i.e., the segment starting at Li? and ending at Ri?. The segments might overlap.
// Every unit of length of the floor should be cleaned by at least one worker. A worker can clean 1 unit of length
// of the floor in 1 unit of time and can start from any position within their segment. A worker can also choose
// to move in any direction. However, the flow of each worker should be continuous, i.e, they can’t skip any 
// portion and jump to the next one, though they can change their direction. What’s the minimum amount of time 
// required to clean the floor, if the workers work simultaneously?
#include<iostream>
#include<algorithm>
using namespace std;
const int MN = 2e7+5;
#define fi first
#define se second
pair<int, int> a[MN] ={};

bool cmp (pair<int, int> x, pair<int, int> y) {
	if (x.se == y.se) return x.fi < y.fi;
	else return x.se < y.se;
}
int n, m;
bool check(int k, pair<int, int> a[]) {
	int endd = 0;
	for (int i=0;i<m;i++) {
		while (i < m && endd < a[i].fi - 1) i++;
		if (i < m) endd = min(endd + k, a[i].second);
	}
	return endd >= n;
}
void read(){
    int ans = -1;
	cin >> n >> m;
	n--;
	for (int i = 0 ; i < m ; i++) cin >> a[i].fi >> a[i].se, a[i].se--;
	sort(a, a+m, cmp);
	int l = 0 , r = n+1;
	while (l<=r){
		int mid = (l+r)/2;
		if (check(mid,a)) {
			ans = mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--) {
    	read();
    }
}