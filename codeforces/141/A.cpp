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
    char a[26] = {0};
    char b[26] = {0};
    char c[26] = {0};
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    rep(i,0,s1.size()-1){
        a[s1[i] - 'A']++; 
    }
    rep(i,0,s2.size()-1){
        b[s2[i] - 'A']++; 
    }
    rep(i,0,s3.size()-1){
        c[s3[i] - 'A']++;
    }
    rep(i,0,25){
        if(c[i] != a[i] + b[i]){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES" ;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 