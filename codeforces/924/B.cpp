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

void solve(){
    double eff = -1.0;
    int n,u;
    cin>>n>>u;
    vector<int> e(n);
    for(int i=0;i<n;i++) cin>>e[i];
    for(int i=0;i<n-2;i++){
        if(e[i+1]-e[i]>=u){
            continue;
        }
        int pos = lower_bound(e.begin(),e.end(),e[i]+1+u) - e.begin();
        --pos;
        //cout<<i<<" "<<pos<<"\n";
        if(pos<=i+1 || e[pos] - e[i] > u){
            continue;
        }
        else{
            eff = max( (double)(e[pos]-e[i+1])/(double)(e[pos]-e[i]),eff);
        }
    }
    cout<<fixed<<setprecision(15)<<eff;
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 