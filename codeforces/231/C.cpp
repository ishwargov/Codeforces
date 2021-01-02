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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    ll n,k;
    cin>>n>>k;
    vector <ll> a(n),s(n+1,0);
    rep(i,0,n-1){ cin>>a[i];}
    sort(a.begin(),a.end());
    ll ans1=-1,ans2=-1;
    rep(i,0,n-1){s[i]=((i<=0)?0:s[i-1])+a[i];}
    //cout<<s[1]<<"\n";
    rep(i,0,n-1){
        ll l=0,r=i,m,cur=0,lst=0;
        while(l<=r){
            m = l+(r-l)/2;
            cur = a[i]*(i+1-m) - (s[i] - ((m<=0)?0:s[m-1]) );
            //cout<<cur<<"|"<<i<<"|"<<m<<",";
            if(cur<=k){
                lst = i-m+1;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        if(lst>ans1){
            ans1 = lst;
            ans2 = a[i];
        }
    } 
    cout<<ans1<<" "<<ans2;   
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 