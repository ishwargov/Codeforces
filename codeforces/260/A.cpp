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

void solve(){
    ll a,b,n,flag=0;
    cin>>a>>b>>n;
    rep(i,0,9){
        if((a*10+i)%b==0){
            a = a*10 + i;
            flag++;
            break;
        }
    }
    if(flag==0){
        cout<<"-1";
        return;
    }
    cout<<a;
    rep(i,0,n-2){
        cout<<"0";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 