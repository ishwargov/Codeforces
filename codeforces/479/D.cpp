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
    ll n,l,x,y;
    cin>>n>>l>>x>>y;
    vector <ll> a(n);
    rep(i,0,n-1){cin>>a[i];}
    ll arr[4]={x,-x,y,-y};
    ll flgx=0,flgy=0;
    rep(i,0,n-1){
        if(binary_search(a.begin(),a.end(),a[i]+x)||binary_search(a.begin(),a.end(),a[i]-x)) flgx = 1;
        if(binary_search(a.begin(),a.end(),a[i]+y)||binary_search(a.begin(),a.end(),a[i]-y)) flgy = 1;
    }
    if(flgx&&flgy){
        cout<<"0";
        return;
    }
    rep(i,0,n-1){
        if((binary_search(a.begin(),a.end(),a[i]+x+y)||binary_search(a.begin(),a.end(),a[i]+x-y)||flgy)&&a[i]+x<l){
            cout<<"1\n"<<a[i]+x;
            return;
        }
        if((binary_search(a.begin(),a.end(),a[i]-x+y)||binary_search(a.begin(),a.end(),a[i]-x-y)||flgy)&&a[i]-x>0){
            cout<<"1\n"<<a[i]-x;
            return;
        }
        if((binary_search(a.begin(),a.end(),a[i]+x+y)||binary_search(a.begin(),a.end(),a[i]-x+y)||flgx)&&a[i]+y<l){
            cout<<"1\n"<<a[i]+y;
            return;
        }
        if((binary_search(a.begin(),a.end(),a[i]-x-y)||binary_search(a.begin(),a.end(),a[i]+x-y)||flgx)&&a[i]-y>0){
            cout<<"1\n"<<a[i]-y;
            return;
        }
    }
    cout<<"2\n"<<x<<" "<<y;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 