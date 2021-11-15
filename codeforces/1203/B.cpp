/* SupremeLord Ishwar Govind */
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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

void solve(){
    ll n;
    cin>>n;
    n=4*n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<int> b;
    for(int i=0;i<n/4;i++){
        if(a[2*i]==a[2*i+1]&&a[n-i*2-1]==a[n-i*2-2])
            b.push_back(a[2*i]*a[n-i*2-1]);
        else{
            cout<<"NO";
            return;
        }
    }
    bool flg = 0;
    for(int i=0;i<n/4-1;i++){
        if(b[i]!=b[i+1]) flg = 1;
    }
    if(flg){
        cout<<"NO";
    }
    else{
        cout<<"YES";
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
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 