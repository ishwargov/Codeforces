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

const int N = (int)1e5+1;
 
int a[N];
int f[N];
int g[N];
int b[N];
 
void solve() {
 
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", a + i);
    }
 
    for (int i = 2; i < N; ++i)
        if (!b[i]) {
            b[i] = i;
            for (int j = i + i; j < N; j += i)
                b[j] = i;
        }
 
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) {
            f[1] = 1;
        } else {
            g[i] = 1;
            int x = a[i];
            while (x != 1) {
                g[i] = max(f[ b[x] ] + 1, g[i]);
                x /= b[x];
            }
 
            ans = max(ans, g[i]);
 
            x = a[i];
            while (x != 1) {
                f[ b[x] ] = max(f[ b[x] ], g[i]);
                x /= b[x];
            }
        }
    }
 
    cout << ans << endl;
}
 

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 