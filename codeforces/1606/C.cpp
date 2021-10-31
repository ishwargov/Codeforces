#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ull f(int j){
    int ans = 0;
    for(int i=0;i<j;i++){
        ans += pow(10,i);
    }
    return ans;
}

ull binpow(ll a, ll b){
    ull res = 1;
    while(b>0){
        if(b&1){
            res*=a;
        }
        a*=a;
        b>>=1;
    }
    return res;
}

void solve(){
    int n,k;
    ull ans = 0;
    cin>>n>>k;
    vector <int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());

    ll cnt = k+1;
    for(int i=0;i<n;i++){
        if(cnt<=0) break;
        if(i<n-1 && cnt >= f(a[i+1]-a[i])*9 ){
            cnt -= f(a[i+1]-a[i])*9 ;
            ans += binpow(10,a[i])*(f(a[i+1]-a[i])*9);
        }
        else if(i<n-1){
            ans += binpow(10,a[i])*(cnt);
            cnt = 0;
        }
        else{
            ans += binpow(10,a[i])*cnt;
            cnt = 0;
        }
        //cout<<ans<<" ";
    }
    cout<<ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}