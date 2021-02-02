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

ll n;
vector <ll> a;
ll paint(ll l,ll r,ll mn){
    ll ans = 0;
    if(l>r||(a[l]==mn&&l==r)) return 0;
    if(l==r&&a[l]>mn) return 1;
    rep(i,l,r){
        if(a[i]>mn){
            ll mn2 = a[i],j=i+1;
            while(a[j]>mn&&j<=r){
                if(a[j]<mn2) mn2 = a[j];
                j++;
            }
            if(j-i<= (mn2 - mn) + paint(i,j-1,mn2)){
                ans += j-i ;
            }
            else{
                ans += (mn2-mn) + paint(i,j-1,mn2);
            }
            //cout<<i<<" "<<j-1<<" "<<mn2<<"\n";
            i = j;
        }
    }
    return ans;
}

void solve(){
    cin>>n;
    a.resize(n);
    rep(i,0,n-1){cin>>a[i];}
    cout<<paint(0,n-1,0);
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 