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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

 
vector<int> primes, is_prime, spf, mobius, phi;
 
void sieve(int n) {
    primes.clear();
    is_prime.assign(n + 1, 1);
    spf.assign(n + 1, 0);
    mobius.assign(n + 1, 0);
    phi.assign(n + 1, 0);
    is_prime[0] = is_prime[1] = 0;
    mobius[1] = phi[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            spf[i] = i;
            mobius[i] = -1;
            phi[i] = i - 1;
        }
        for (auto p : primes) {
            if (i * p > n || p > spf[i]) break;
            is_prime[i * p] = 0;
            spf[i * p] = p;
            mobius[i * p] = spf[i] == p ? 0 : -mobius[i];
            phi[i * p] = spf[i] == p ? phi[i] * p : phi[i] * phi[p];
        }
    }
}
 
void solve() {
	int n; cin >> n;
	map<vector<int>,int> mp;
	while (n--) {
		int x; cin >> x;
		vector<int> factors;
		while (x > 1) {
			int p = spf[x], c = 0;
			while (x % p == 0) x /= p, c++;
			if (c % 2) factors.push_back(p);
		}
		mp[factors]++;
	}
	int ans1 = 0, ans2 = 0, to_one = mp[{}];
	for (auto [factors, cnt] : mp) {
		ans1 = max(ans1, cnt);
		if (cnt % 2) ans2 = max(ans2, cnt);
		else if (factors.size()) to_one += cnt;
	}
	ans2 = max(ans2, to_one);
	int q; cin >> q;
	while (q--) {
		ll x; cin >> x;
		cout << (x == 0 ? ans1 : ans2) << "\n";
	}
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve(1e6);
    int tc = 1; 
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t  << ": ";
        solve();
    }
}