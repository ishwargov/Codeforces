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

const int MAXN = 1e6+6;
ll mod10[MAXN];

void init(ll b){
    mod10[0] = 1;
    rep(i,1,1e6+1){
        mod10[i] = (mod10[i-1]*10)%b;
    }
}

void solve(){
    ll a,b; string num;
    cin>>num;
    cin>>a>>b;
    init(b);
    
    vector<ll> amod(num.size()+2,0),bmod(num.size()+2,0);
    for(ll i=1;i<=num.size();i++){
        amod[i] = ( (amod[i-1]*10) + (int)(num[i-1]-'0') )%a;
        bmod[i] = ( bmod[i-1] + mod10[i-1]*((int)(num[num.size()-i]-'0') ) )%b;
    }
    for(ll i=1;i<num.size();i++){
        if(amod[i]==0&&bmod[num.size()-i]==0&&num[i]!='0'){
            cout<<"YES\n"<<num.substr(0,i)<<"\n"<<num.substr(i,num.size()-i);
            return;
        }
    }
    cout<<"NO";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 