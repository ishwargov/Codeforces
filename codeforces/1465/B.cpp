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
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0


int check_fair(unsigned long long int n){
    int dig[10];
    memset(dig,0,sizeof(dig));
    unsigned ll k = n;
    while(k>0){
        dig[k%10]++;
        k=k/10;
    }
    rep(i,1,9){
        if(dig[i]>0 && n%i!=0) return false;
    }
    return true;
}

void solve(){
    unsigned ll n;
    cin>>n;
    ll offset = 362881;
    for(unsigned ll i=n;i<=min((unsigned ll)1e18,n+offset);i++){
        if(check_fair(i)){
            cout<<i;
            break;
        }
    }
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