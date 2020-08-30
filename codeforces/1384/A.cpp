/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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
    ll n;
    cin>>n;
    ll mx=0;
    ll b[102];
    rep(i,0,n-1){
        cin>>b[i];
        if(mx<b[i])
            mx = b[i];
    }
    if(mx==0)
        mx=1;
    string s[102];
    rep(i,0,n){
        rep(j,0,mx-1){
            s[i].pb((char)('a'+(i)%26));
        }
    }
    rep(i,0,n-1){
        rep(j,0,b[i]-1){
            s[i+1][j] = s[i][j];
        }
        if(s[i+1][b[i]]==s[i][b[i]]&&b[i]<=mx){
            s[i+1][b[i]] = 'a' + ((s[i+1][b[i]]-'a')+1)%26;
        }

    }
    rep(i,0,n){
        cout<<s[i]<<"\n";
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
        //cout<<"\n";
    }
    //timetaken();
    return 0;
}