/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define PI acos(-1)
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=(k);i<=(n);i++)
#define repi(i,k,n) for(ll i=(k);i>=(n);i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
	string s; cin >> s;
	s = " " + s;
	int N = s.size() - 1;
	vector<int> pi(N + 2, 0), apar(N + 2, 0);
	int k = 0;
	for (int i = 2; i <= N; ++i) {
		while (k > 0 && s[k + 1] != s[i])
			k = pi[k];
		if (s[k + 1] == s[i])
			++k;
		if (i != N)
			apar[k]++;
		pi[i] = k;
	}
	
	for (int i = N; i > 0; --i)
		if (apar[i] > 0)
			apar[pi[i]] = apar[i];
	
	while (k > 0) {
		if (apar[k]) {
			for (int i = 0; i < k; ++i)
				cout << s[i + 1];
			return;
		}
		k = pi[k];
	}
	cout << "Just a legend";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 

