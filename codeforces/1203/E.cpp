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
    set <ll> s;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]-1!=0 && s.find(a[i]-1)==s.end()) s.insert(a[i]-1);
        else if(s.find(a[i])==s.end()) s.insert(a[i]);
        else if(s.find(a[i]+1)==s.end()) s.insert(a[i]+1);
    }
    cout<<s.size();
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 