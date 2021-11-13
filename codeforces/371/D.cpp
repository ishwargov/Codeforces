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

set<int> s;

ll get_next(ll i){
    set<int>::iterator it = s.lower_bound(i);
    if(it==s.end()){
        return 1e9;
    }
    else{
        return *it;
    }
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n,0);
    for(int i=0;i<n;i++){ 
        cin>>a[i];
        s.insert(i);
    }
    ll m; cin>>m;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        if(x==1){
            ll y,z;
            cin>>y>>z;
            ll cur = z;
            ll j = get_next(y-1);
            while(cur>0 && j<n){
                if(cur+b[j]>=a[j]){
                    cur = cur - (a[j]-b[j]);
                    b[j] = a[j];
                    s.erase(j);
                    j = get_next(j);
                }
                else{
                    b[j] += cur;
                    cur = 0;
                }
            } 
        }
        else{
            ll y;
            cin>>y;
            cout<<b[y-1]<<"\n";
        }
    }
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
}   