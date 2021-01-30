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
    ll n,k;
    cin>>n>>k;
    vector <ll> p(n),sum(n+1,0);
    rep(i,0,n-1){cin>>p[i];sum[i+1] = sum[i]+p[i];}
    ll ans=0,cur=sum[1];
    double per = (double)k/100.0;
    rep(i,1,n-1){
        double tk = (double)(p[i])/(double)(cur);
        if(tk>per){ 
            ll tmp = (p[i]*100 - cur*k)/k  +  ((p[i]*100 - cur*k)%k!=0);   
            //cout<<tmp<<" "<<i<<"\n";
            ans += tmp;
            cur += tmp;
        }
        cur += p[i];
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
    //timetaken();
    return 0;
} 