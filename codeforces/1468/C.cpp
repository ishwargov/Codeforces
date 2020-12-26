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

ll vis[511111];
void solve(){
    ll n,ch,inp,mon=1,cur=1;
    priority_queue<pair<ll,ll> > poly;
    memset(vis,0,sizeof(vis));
    cin>>n;
    rep(i,0,n-1){
        cin>>ch;
        if(ch==1){
            cin>>inp;
            poly.push(mp(inp,-cur));
            cur++;
        }
        else if(ch==2){
            while(vis[mon]){
                mon++;
            }
            cout<<mon<<" ";
            vis[mon]=1;
            mon++;
        }
        else if(ch==3){
            while(vis[-poly.top().se]) poly.pop();
            vis[-poly.top().se] = 1;
            cout<<-poly.top().se<<" ";
            poly.pop();
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