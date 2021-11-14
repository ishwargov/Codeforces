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

bool check(vector<ll>& a,int l,int r){
    for(int i=l;i<r;i++){
        if(a[i]>a[i+1]) return false;
    }
    return true;
}

void solve(){
    ll n,pos=-1;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){ pos = i; break;}
    }
    //cout<<pos<<"\n";
    if(pos==-1||(check(a,0,pos)&&check(a,pos+1,n-1)&&a[n-1]<=a[0])){
        cout<<((pos==-1)?0:(n-1-pos-1+1));
    }
    else{
        cout<<-1;
    }
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 