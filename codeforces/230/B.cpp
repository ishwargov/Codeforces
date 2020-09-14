/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
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
#define N 1000001
int prime[N];
void init(){
    for(int i=0;i<N;i++){
        prime[i] = 1;
    }
    for(int i=2;i*i<N;i++){
        if(prime[i]==1){
            for(int k=i*i;k<N;k=k+i){
                prime[k] = 0;
            }
        }
    }
}

void solve(){
    ll n;
    cin>>n;
    double ans = sqrt(n);
    if(n==1){ cout<<"NO"; return; }
    if((int)ans==ans){
        //cout<<ans<<"\n";
        if(prime[(int)ans]==1)
            cout<<"YES";
        else
            cout<<"NO";
        return;
    }
    cout<<"NO";
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