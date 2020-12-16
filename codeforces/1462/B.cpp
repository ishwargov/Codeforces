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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    string s2 = "2020";
    ll l=0,r=0;
    if(s[0]=='2'){
        l++;
        if(s[1]=='0'){
            l++;
            if(s[2]=='2')
                l++;
        }
    }
    if(s[n-1]=='0'){
        r++;
        if(s[n-2]=='2'){
            r++;
            if(s[n-3]=='0')
                r++;
        }
    }
    if(l+r>=4){
        cout<<"YES";
        return;
    }
    if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){
        cout<<"YES";
        return;
    }
    if(s[n-1]=='0'&&s[n-2]=='2'&&s[n-3]=='0'&&s[n-4]=='2'){
        cout<<"YES";
        return;
    }
    cout<<"NO";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 