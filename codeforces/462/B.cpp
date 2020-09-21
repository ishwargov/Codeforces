/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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

ll alp[26]={0};
void solve(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    rep(i,0,n-1){
        alp[s[i]-'A']++;
    } 
    ll ans=0;
    sort(alp,alp+26);
    reverse(alp,alp+26);
    int i=0;
    while(k>0){ 
        if(k>alp[i]){
            k -= alp[i];
            ans += alp[i]*alp[i];
        }
        else{
            ans += k*k;
            k = 0;
        }
        i++;
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 