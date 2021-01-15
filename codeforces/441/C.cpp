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

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<pair<int,int>>> tubes;
    vector <pair<int,int>> cur;
    ll curcnt = 0;
    for(ll i=0;i<n;i++){
        ll j,t;
        if(i%2==0){j=0,t=1;}
        else{j = m-1,t=-1;}
        for(;j>=0&&j<m;j+=t){
            cur.pb({i+1,j+1});
            curcnt++;
            if(curcnt==2){
                tubes.pb(cur);
                curcnt=0;
                cur.clear();
            }
        }
    }
    for(ll i=0;i<k-1;i++){
        cout<<"2 ";
        rep(j,0,1){
            cout<<tubes[i][j].fi<<" "<<tubes[i][j].se<<" ";
        }
        cout<<"\n";
    }
    cout<<(n*m -2*(k-1))<<" ";
    for(ll i=k-1;i<tubes.size();i++){
        rep(j,0,1){
            cout<<tubes[i][j].fi<<" "<<tubes[i][j].se<<" ";
        }
    }  
    if(cur.size()==1)
        cout<<cur[0].fi<<" "<<cur[0].se<<" ";      
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 