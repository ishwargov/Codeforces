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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    rep(i,0,s.size()-1){
        alp[s[i]-'a']++;
    }
    rep(i,0,25){
        if(alp[i]%n!=0){
            cout<<"-1";
            return;
        }
    }
    string ans="";
    rep(i,0,25){
        if(alp[i]>0){
            rep(j,1,alp[i]/n)
                ans += string(1,(char)('a'+i));
        }
    }
    rep(i,0,n-1){
        cout<<ans;      
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 