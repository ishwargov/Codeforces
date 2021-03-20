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
    string s,t;
    cin>>s;
    cin>>t;
    ll cnt1=0,cnt2=0;
    if(s.size()!=t.size()){cout<<"NO";return;}
    for(ll i=0;i<s.size();i++){
        if(s[i]=='1') cnt1++;
        if(t[i]=='1') cnt2++;
    }
    if((cnt1==0&&cnt2!=0)||(cnt1!=0&&cnt2==0)){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 