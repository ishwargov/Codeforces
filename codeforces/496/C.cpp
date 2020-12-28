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
    int n,m;
    cin >> n >> m;
    vector <int> cmp(n,0);
    vector <string> s(n,"");
    int ans = 0;
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }
    for(int j = 0; j < m;j++){
        bool flag = 0;
        for(int i = 1; i < n;i++){
            if(!cmp[i-1] && s[i][j] < s[i-1][j]){
                ans++;
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;   
        for(int i = 1; i < n;i++){
            if(s[i][j] != s[i-1][j])
                cmp[i-1] = true;
        }
    }
    cout << ans << endl;
}   

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 