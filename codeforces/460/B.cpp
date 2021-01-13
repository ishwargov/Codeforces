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

ll s(ll i){
    ll re = 0;
    while(i>0){
        re += i%10;
        i = i/10;
    }
    return re;
}

ll power(ll a,ll b){
    if(b==0) return 1;
    return(a*power(a,b-1));
}

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    vector <ll> ans;
    //cout<<b*pow(s(13726),a)+c<<"\n";
    rep(i,0,81){
        if(b*power(i,a)+c>0&&b*power(i,a)+c<=1e9){
        ll cur = b*power(i,a)+c;
        if(s(cur)==i){
            ans.pb(cur);
        }
        }
    }
    if(ans.size()==0){cout<<"0";return;}
    cout<<ans.size()<<"\n";
    rep(i,0,ans.size()-1){
        cout<<ans[i]<<" ";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 