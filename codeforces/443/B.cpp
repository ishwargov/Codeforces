/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define pb push_back
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
    return 0;
}   