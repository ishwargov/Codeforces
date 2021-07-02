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

ll n,m,k;
vector <ll> c,u,v,x,p;
const int MAXK = 555;
ll d[MAXK][MAXK],adj[MAXK][MAXK],dsu[(int)1e5+5],t[(int)1e5+5],sz[(int)1e5+5];

ll type(ll i){
    return t[i];
}

ll find(ll u){
    ll i = u;
    while(dsu[i]!=i){
        i = dsu[i];
    }
    return i;
}

void unio(ll u,ll v){
    ll a = find(u),b = find(v);
    if(a!=b){
        if(sz[a]<sz[b]) swap(a,b);
        dsu[b] = a;
        sz[a] += sz[b];
    }
}

void solve(){
    cin>>n>>m>>k;
    ll cur = 1;
    c.resize(k),u.resize(m),v.resize(m),x.resize(m),p.resize(k+1,0);
    
    rep(i,0,1e5+4){
        dsu[i] = i;
        sz[i] = 1;
    }

    rep(i,0,k-1){
        cin>>c[i];
        rep(j,0,c[i]-1){t[cur++]=i+1;}
    }

    rep(i,0,k){rep(j,0,k){d[i][j]=1e9;}}
    rep(i,0,m-1){
        cin>>u[i]>>v[i]>>x[i];
        d[type(u[i])][type(v[i])] = min(d[type(u[i])][type(v[i])],x[i]);
        d[type(v[i])][type(u[i])]= min(d[type(v[i])][type(u[i])],x[i]);
        if(x[i]==0){
            unio(u[i],v[i]);
        }
    }
    bool ok = true;
    rep(i,1,n-1){
        if(type(i)==type(i+1)&&find(i)!=find(i+1)){
            ok = false;
        }
    }
    if(!ok){
        cout<<"No";
        return;
    }
    else{
        cout<<"Yes\n";
        rep(i,1,k){d[i][i]=0;}
        rep(i,1,k){
            rep(j,1,k){
                rep(s,1,k){
                    d[j][s] = min(d[j][s],d[j][i]+d[i][s]);
                }
            }
        }
        rep(i,1,k){
            rep(j,1,k){
                if(d[i][j]>1e8){
                    cout<<-1;
                }
                else{
                    cout<<d[i][j];
                }
                cout<<" ";
            }
            cout<<"\n";
        }
    }
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 