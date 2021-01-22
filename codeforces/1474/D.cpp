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
    ll n;
    cin>>n;
    vector <ll> a(n),pre(n+2,0),suf(n+2,0);
    rep(i,0,n-1){
        cin>>a[i];
    }
    pre[0] = a[0];
    suf[n-1] = a[n-1];
    rep(i,1,n-1){
        if (pre[i-1]==-1 || pre[i-1]>a[i]) pre[i]=-1;
        else pre[i] = a[i] - pre[i-1];
    }
    repi(i,n-2,0){
        if (suf[i+1]==-1 || suf[i+1]>a[i]) suf[i]=-1;
        else suf[i] = a[i] - suf[i+1];
    }
    /*rep(i,0,n-1){
        cout<<pre[i]<<" "<<suf[i]<<"\n";
    }*/
    rep(i,0,n-1){
        if(pre[i]!=-1&&suf[i]!=-1&&pre[i]==suf[i+1]){
            cout<<"YES";
            return;
        }
    }
    if(pre[0]!=-1&&suf[2]!=-1&& suf[2]<=a[0] && a[0] == a[1] + suf[2]){
        cout<<"YES";
        return;
    }
    rep(i,1,n-1){
        if (pre[i-1] !=-1 && suf[i+2] != -1 && pre[i-1]<=a[i+1] && suf[i+2]<=a[i] && pre[i-1] + a[i] == a[i+1] + suf[i+2]){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
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