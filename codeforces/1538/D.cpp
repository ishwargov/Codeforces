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
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

vector <ll> primes; 
bool isprime[(int)1e5+5];

void init(){
    memset(isprime,true,sizeof(isprime));
    rep(i,2,1e5+1){
        if(isprime[i]){
            for(ll j=i*i;j<=1e5+1;j+=i){
                isprime[j]=0;
            }
        }
    }
    rep(i,2,1e5+1){
        if(isprime[i]){
            primes.pb(i);
        }
    }
}

void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    ll n=0,m=0,mink=2;
    if(a==b) mink=0;
    else if(a%b==0||b%a==0) mink = 1;

    for(auto p:primes){
        while(a%p==0){
            n++;
            a/=p;
        }
        while(b%p==0){
            m++;
            b/=p;
        }
    }
    if(a>1) n++;
    if(b>1) m++;
    //cout<<mink<<" "<<n<<" "<<m<<"\n";
    if((k>=mink&&k<=n+m)){
        if(k==1&&mink==1) cout<<"YES";
        else if(k!=1) cout<<"YES";
        else cout<<"NO";
    }
    else cout<<"NO";   
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    init();
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 