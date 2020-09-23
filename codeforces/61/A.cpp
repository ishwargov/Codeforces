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
    string s1,s2,s3;
    ll a,b;
    cin>>s1>>s2;
    repi(i,s1.length()-1,0){
        a = (int)s1[i] - 48;
        b = (int)s2[i] - 48;
        s3.pb((char)(a^b)+48);
    }
    reverse(s3.begin(),s3.end());
    cout<<s3;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 