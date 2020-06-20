/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)

void solve(){
    ll n,k,d=0,ans=0,flag=0;
    string s;
    cin>>n>>k;
    cin>>s;
    rep(i,0,k-1){
        if(s[i]=='1'){
            flag++;
            break;
        }
    }
    if(flag==0){
        if(k>=n){
            ans++;
            s[0]='1';
        }
        else if(s[k]=='0'){
            ans++;
            s[0]='1';
        }
    }
    rep(i,0,n-1){
        if(s[i]=='1'){
            d=0;
            //cout<<"1 ";
            continue;
        }
        if(s[i]=='0'){
            d++;
            //cout<<"2 ";
        }
        if((d==2*k+1)||(i==n-1&&d>k)){
            if(d==2*k+1)
                i = i-k;
            d=0;
            ans++;
            //cout<<"3 ";
        }
    }
    cout<<ans;
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
    return 0;
}