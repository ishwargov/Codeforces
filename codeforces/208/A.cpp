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
    string s;
    cin>>s;
    ll n = s.size(),flg=0;
    rep(i,0,n-1){
        if(i+2<n&&s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            flg++;
            if(flg==1&&i!=0){cout<<" ";}
            i = i+2;
        }
        else{
            flg = 0;
            cout<<s[i];
        }
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 