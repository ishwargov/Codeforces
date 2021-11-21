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

ll d;

binpow(ll a,ll b){
    ll res = 1;
    if(a>=2 && d>=10) return 1001;
    while(b>0){
        if(b&1) res *= a;
        a*=a;
        b>>=1;
    }
    return res;
}

void next(vector<int>& a,ll k){
    int d = a.size();
    bool flg = 0;
    if(a[d-1]==k) flg = 1;
    a[d-1] = (flg)?1:(a[d-1]+1);
    if(flg){
        for(int i=d-2;i>=0;i--){
            if(a[i]!=k){ a[i] = a[i] + 1; break; }
            else{ a[i] = 1; }
        }
    }
}

void solve(){
    ll n,k;
    cin>>n>>k>>d;
    vector<vector<int>> seq;
    if(binpow(k,d)<n){
        cout<<-1;
    }
    else{
        vector<int> a;
        for(int i=0;i<d;i++){
            a.pb(1);
        }
        for(int i=0;i<n;i++){
            seq.pb(a);
            next(a,k);
        }
        for(int i=0;i<d;i++){
            for(int j=0;j<n;j++){
                cout<<seq[j][i]<<" ";
            }
            cout<<"\n";
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