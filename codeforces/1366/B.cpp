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
    ll n,x,m,flag=0;
    cin>>n>>x>>m;
    ll mx = -1,mn=-1;
    vector <ll> l,r;
    ll inp;
    rep(i,0,m-1){
        cin>>inp;
        l.pb(inp);
        cin>>inp;
        r.pb(inp);
    } 
    rep(i,0,m-1){
        if(flag==0){    
            if(x<=r[i]&&x>=l[i]){
                mn = l[i];
                mx = r[i];//cout<<mn<<" "<<mx<<"\t";
                flag++;
                continue;
            }
        }
        else{
            if((r[i]>=mx)&&(l[i]<=mn)){
                mx =r[i];
                mn =l[i];//cout<<mn<<" "<<mx<<"\t";
                continue;
            }
            if((r[i]>=mx)&&(l[i]<=mx)){
                mx = r[i];///cout<<mn<<" "<<mx<<"\t";
                continue;
            }
            if((r[i]>=mn)&&(l[i]<=mn)){
                mn =l[i];//cout<<mn<<" "<<mx<<"\t";
                continue;
            }
        }
    }
    //cout<<mn<<" "<<mx<<"\t";
    if(flag==0){
        cout<<"1";
        return;
    }
    cout<<mx-mn+1;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
}