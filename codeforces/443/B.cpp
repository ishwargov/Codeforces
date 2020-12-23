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
    string s;
    cin>>s;
    ll n = s.length();
    ll k;
    cin>>k;
    ll mx = 1;
    for(ll i=0;i<n;i++){

    }
    n = n+k;
    rep(i,0,k-1){
        s.pb('$');
    }
    rep(i,0,n-1){
        for(ll j = i+1;j<n;j++){
            if((j-i+1)%2==0){
                ll len = j-i+1;
                ll flg = 0;
                for(ll m=0;m<len/2;m++){
                    if(s[i+m]!=s[i+len/2+m]&&s[i+len/2+m]!='$'){
                        flg++;
                        break;
                    }
                }
                if(flg==0) mx = max(mx,len);
            }
        }
    }    
    cout<<mx;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
}   