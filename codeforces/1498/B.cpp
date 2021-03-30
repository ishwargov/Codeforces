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
    ll cnt = 0,n,w,flg=0;
    vector <ll> pa(64,0);
    cin>>n>>w;
    rep(i,0,n-1){
        ll x,y=0;
        cin>>x;
        x/=2;
        while(x>0){
            y++;
            x/=2;
        }
        flg++;
        pa[y]++;
    }
    while(flg){
        ll cur = 0,flg2=-1;
        while(flg2!=cur){
            flg2 = cur;
            for(ll i=63;i>=0;i--){
                if(pa[i]>0&&cur+(1<<i)<=w){
                    pa[i]--;
                    //cout<<(1<<i)<<" ";
                    cur += (1<<i);
                    flg--;
                    break;
                }
            }
        }
        //cout<<"\n";
        cnt++;
    }
    cout<<cnt;
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