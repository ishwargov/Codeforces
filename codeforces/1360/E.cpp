/* SupremeLord Ishwar Govind */
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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

void solve(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='1'){
                bool flg = 0;
                if(i+1<n && a[i+1][j]=='1'){
                    flg = flg || 1;
                }
                if(j+1<n && a[i][j+1]=='1'){
                    flg = flg || 1;
                }
                if(i+1==n || j+1==n){
                    flg = flg || 1;
                }
                if(!flg){
                    cout<<"NO";
                    return;
                }
            }
        }
    }
    cout<<"YES";
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