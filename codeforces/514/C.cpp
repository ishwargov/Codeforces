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

const int MAXN = 6e5+5;
ll p[MAXN],q[MAXN];

ll hsh(string s){
    ll h = 0;
    for(ll i=0;i<s.size();i++){
        h = (h+p[i]*(s[i]-'a'+1))%M;
    }
    return h;
}

ll hsh2(string s){
    ll h = 0;
    for(ll i=0;i<s.size();i++){
        h = (h+q[i]*(s[i]-'a'+1))%M;
    }
    return h;
}


void init(){
    ll pm = 1331;
    p[0] = 1;
    rep(i,1,6e5+1){
        p[i] = (p[i-1]*pm)%M;
    }
    pm = 31;
    q[0] = 1;
    rep(i,1,6e5+1){
        q[i] = (q[i-1]*pm)%M;
    }
}

void solve(){
    ll n,m;
    cin>>n>>m;
    vector <string> s(n),t(m);
    vector <pair<ll,ll>> hashes(n),hashes2(m);
    rep(i,0,n-1){
        cin>>s[i];
        hashes[i] = {hsh(s[i]),hsh2(s[i])};
    }
    sort(hashes.begin(),hashes.end());
    rep(i,0,m-1){
        cin>>t[i];
        hashes2[i] = {hsh(t[i]),hsh2(t[i])};
    }
    rep(i,0,m-1){
        ll flg = 0;
        for(ll j=0;j<t[i].size();j++){
            ll bck = t[i][j]-'a';
            rep(k,0,25){
                if(bck!=k){
                    t[i][j] = (char)(k+'a');
                    ll clc1 =(hashes2[i].fi - (bck+1)*p[j] + (k+1)*p[j])%M;
                    ll clc2 =(hashes2[i].se - (bck+1)*q[j] + (k+1)*q[j])%M;
                    clc1 = (clc1<0)?clc1+M:clc1;
                    clc2 = (clc2<0)?clc2+M:clc2;
                    pair<ll,ll> clc = {clc1,clc2};
                    if(binary_search(hashes.begin(),hashes.end(),clc)){
                        //cout<<t[i]<<" ";
                        flg=1;
                        break;
                    }
                }
            }
            t[i][j] = (char)(bck+'a');
            if(flg) break;
        }
        if(flg){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }


}   

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    init();
    solve();
    //timetaken();
    return 0;
} 