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
    ll ab=-1,ba=-1,flg=0;
    string s;
    cin>>s;
    ll n = s.size();
    for(ll i = 0;i < n;i++){
        if(i+1<n&&s[i]=='A'&&s[i+1]=='B'&&ab==-1){
            ab = i;
        }
        if(i+1<n&&s[i]=='B'&&s[i+1]=='A'&&ba==-1){ 
            ba = i;
        }
    }
    if(ab!=-1)
    rep(i,ab+2,n-1){
        if(i+1<n&&s[i]=='B'&&s[i+1]=='A'){
            //cout<<ab<<" "<<i<<"\n";
            flg++;break;
        }
    }
    if(ba!=-1)
    rep(i,ba+2,n-1){
        if(i+1<n&&s[i]=='A'&&s[i+1]=='B'){
            //cout<<ba<<" "<<i<<"\n";
            flg++;break;
        }
    }
    if(flg){cout<<"YES";}
    else{cout<<"NO";}
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 