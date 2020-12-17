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
    ll n,sum=0;
    cin>>n;
    vector <ll> a(n,0);
    rep(i,0,n-1){
        cin>>a[i];
        sum += a[i];
    }
    repi(i,n,1){
        if(sum%i==0){
            ll req = sum/i;
            ll cur = 0;
            int flag = 0;
            for(ll j = 0;j<n;j++){
                cur += a[j];
                if(cur>req){
                    flag++;
                    break;
                }
                else if(req==cur){
                    cur = 0;
                }
            }
            if(flag==0){
                cout<<n-i;
                return;
            }
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