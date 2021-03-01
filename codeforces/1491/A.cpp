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
    ll n,q,cnt1=0,cnt0=0;
    cin>>n>>q;
    vector <ll> a(n);
    rep(i,0,n-1){
        cin>>a[i];
        if(a[i]==1) cnt1++;
        else cnt0++;
    }
    rep(i,0,q-1){
        ll cmd,x;
        cin>>cmd;
        if(cmd==1){
            cin>>x;
            if(a[x-1]==1) {cnt1--,cnt0++;a[x-1] = 0;}
            else{cnt1++,cnt0--;a[x-1] = 1;}
        }
        else{
            cin>>x;
            if(x>cnt1){
                cout<<"0\n";
            }
            else{
                cout<<"1\n";
            }
        }
    }

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 