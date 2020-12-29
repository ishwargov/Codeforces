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

void solve(){
    int n, k;
        std::cin >> n >> k;
        int l = 0, r = 0;
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            int h;
            std::cin >> h;
            if (i == 0) {
                l = r = h;
            } else {
                l = std::max(l - k + 1, h);
                r = std::min(r + k - 1, h + k - 1);
            }
            if (l > r) {
                ok = false;
            }
            if (i == n - 1 && l != h) {
                ok = false;
            }
        }
    if (ok) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 