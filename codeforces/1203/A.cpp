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

bool clk(vector<int>& a,ll pos){
    int n = a.size();
    for(int i=0;i<n-1;i++){
        if(a[(pos+i)%n]+1!=a[(pos+i+1)%n]) return false;
    }
    return true;
}

bool anticlk(vector<int>& a,ll pos){
    int n = a.size();
    for(int i=0;i<n-1;i++){
        if(a[(pos-i+n)%n]+1!=a[(pos-i-1+n)%n]) return false;
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    ll pos = -1;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) pos = i;
    }
    //cout<<anticlk(a,pos)<<" "<<clk(a,pos);
    if(anticlk(a,pos)||clk(a,pos)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
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