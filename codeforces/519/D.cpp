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
    ll alp[26],ans=0;
    string s;
    vector <int> idx[26];
    rep(i,0,25){
        cin>>alp[i];
    }
    cin>>s;
    ll n = s.size();
    vector <ll> sum(n+1,0);
    rep(i,0,n-1){
        sum[i+1] = sum[i] + alp[(int)(s[i]-'a')];
        idx[(int)(s[i]-'a')].pb(i);
    }
    rep(i,0,25){
        map <ll,int> cnt;
        ll lim = 0;
        if(idx[i].size()<=1) continue;
        else lim = idx[i].size()-1;
        rep(j,0,lim){
            //cout<<i<<" "<<j<<" "<<sum[idx[i][j]]<<"\n";
            ans += cnt[sum[idx[i][j]]];
            cnt[sum[idx[i][j]+1]]++;
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 