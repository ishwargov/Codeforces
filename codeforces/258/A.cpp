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

void solve(){
    string s;
    cin>>s;
    ll flg = -1;
    rep(i,0,s.size()-1){
        if(s[i]=='0'){
            flg = i;
            break; 
        }
    } 
    ll n = s.size();
    if(flg==-1){
        rep(i,0,n-2){
            cout<<s[i];
        }
        return;
    }
    rep(i,0,n-1){
        if(i!=flg)
            cout<<s[i];
    } 
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 