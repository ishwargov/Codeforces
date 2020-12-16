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

void solve(){
    ll x;
    cin>>x;
    ll vis[10];
    memset(vis,0,sizeof(vis));
    stack <ll> s;
    while(x>0){
        ll a = 9,flag=0;
        for(a=9;a>=1;a--){
            if(!vis[a]&&x>=a){
                s.push(a);
                x = x-a;
                vis[a]=1;
                flag++;
                break;
            }
        }
        if(flag==0){
            cout<<"-1";
            return;
        }
    }
    while(s.size()!=0){
        cout<<s.top();
        s.pop();
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