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

bool isprime[(int)1e6+1];
vector <ll> divi,prime;
vector <pair<ll,ll>> div_cnt;

void sieve(){
    memset(isprime,true,sizeof(isprime));
    isprime[0] = false,isprime[1] = false;
    for(ll i=2;i*i<1e6;i++){
        if(isprime[i]){
            for(ll j=i*i;j<1e6;j+=i){
                isprime[j] = false;
            }
        }
    }
    for(ll i=2;i<1e6;i++){
        if(isprime[i]) prime.pb(i);
    }
}

void get_div(ll idx,ll sz,ll res){
    if(idx==sz){
        divi.pb(res);
        return;
    }
    for(ll i=0;i<=div_cnt[idx].se;i++){
        get_div(idx+1,sz,res);
        res *= div_cnt[idx].fi;
    }
}

bool check(string s,string t,ll a){
    ll sz = s.size();
    ll tz = t.size();
    ll dv1 = sz/a;
    ll dv2 = tz/a;
    for(ll i=1;i<dv1;i++){
        for(ll j=0;j<a;j++){
            if(s[j]!=s[i*a+j]) return false;
        }
    }
    for(ll i=0;i<dv2;i++){
        for(ll j=0;j<a;j++){
            if(s[j]!=t[i*a+j]) return false;
        }
    }
    return true;
}

void solve(){
    string s,t;
    cin>>s;
    cin>>t;
    ll d = __gcd(s.size(),t.size());
    for(auto p:prime){
        //cout<<p<<" ";
        if(d%p==0){
            ll cnt = 0;
            while(d%p==0){
                d /= p;
                cnt++;
            }
            div_cnt.pb({p,cnt});
        }
    }
    ll sz = div_cnt.size(),ans=0;
    get_div(0,sz,1);
    for(auto x:divi){
        //cout<<x<<" "<<check(s,x)<<" "<<check(t,x)<<"\n";
        if(check(s,t,x)){
            ans++;
        }
    }
    cout<<"\n"<<ans;
}

int main(){   
    sieve();
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 