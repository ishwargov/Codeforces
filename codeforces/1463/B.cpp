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
    ll n,s=0;
    cin>>n;
    vector <ll> a(n),b(n);
    rep(i,0,n-1){
        cin>>a[i];
        s+=a[i];
    }
    rep(i,0,1){
        ll flag = 0,cur=0;
        rep(j,0,n-1){
            if(j%2==i){
                b[j] = 1;
            }
            else{
                b[j] = a[j];
            }
            cur += abs(b[j] - a[j]);
        }
        if(cur*2<=s){
            rep(j,0,n-1){
                cout<<b[j]<<" ";
            }
            return;
        }
    }

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