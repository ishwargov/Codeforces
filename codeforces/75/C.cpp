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

vector <ll> divisors;

void getDivisors(ll ind,ll res,vector <pair<ll,ll>> factors) {
    if (ind == factors.size()) {
        divisors.push_back(res);
        return;
    }
    for (int i = 0; i <= factors[ind].second; i++) {
        getDivisors(ind + 1, res,factors);
        res *= factors[ind].first;
    }
}


vector <pair<ll,ll>> fact(ll d){
    vector <pair<ll,ll>> f;
    ll df = 1;
    for(ll i=2;i*i<=1e9;i+=df,df=2){
        if(d%i==0){
            f.pb({i,0});
            while(d%i==0){
                d = d/i;
                f.back().se++;
            }
        }
    }
    if(d!=1){
        f.pb({d,1});
    }
    return f;
}

void solve(){
    ll a,b,n;
    cin>>a>>b;
    cin>>n;
    ll d = __gcd(a,b);
    vector <pair<ll,ll>> factors = fact(d);
    getDivisors(0,1,factors);
    sort(divisors.begin(),divisors.end());
    /*for(ll j=0;j<divisors.size();j++){
        cout<<divisors[j]<<" ";
    }
    cout<<"\n";*/
    rep(i,0,n-1){
        ll l,r;
        cin>>l>>r;
        ll idx = upper_bound(divisors.begin(),divisors.end(),r) - divisors.begin();
        idx--;
        if(idx==-1||divisors[idx]<l) cout<<-1<<"\n";
        else cout<<divisors[idx]<<"\n";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 