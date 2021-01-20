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

vector <ll> a;
vector <pair<ll,ll>> ans;
ll mpa[1111111];

void clearmp(){
    for(auto x:a){
        mpa[x]=0;
    }
}
void initmp(){
    clearmp();
    for(auto x:a){
        mpa[x]++;
    }
}

void solve(){
    ll n;
    cin>>n;
    a.clear();
    a.resize(2*n);
    ll sz = 2*n-1;
    rep(i,0,sz){
        cin>>a[i];  
        mpa[a[i]]++;        
    }
    sort(a.rbegin(),a.rend());
    rep(i,1,sz){
        initmp();
        ans.clear();    
        ll x = a[0] + a[i],cur=1;
        mpa[a[0]]--;
        mpa[a[i]]--;
        ans.pb({a[0],a[i]});
        ll mx = a[0];
        while(ans.size()<n){
            //cout<<"1";
            while(mpa[a[cur]]<=0&&cur<2*n){
                //cout<<cur<<" "<<mpa[a[cur]]<<"\n";
                cur++;
            }
            if(cur>=2*n){break;}
            mpa[a[cur]]--;
            ll fnd = mx - a[cur];
            if(mpa[fnd]<=0){break;}
            else{
                mx = max(fnd,a[cur]);
                mpa[fnd]--;
                ans.pb({a[cur],fnd});
                cur++;
            }
        }
        if(ans.size()==n){
            cout<<"YES\n";
            cout<<x<<"\n";
            for(auto x:ans){
                cout<<x.fi<<" "<<x.se<<"\n";
            }
            clearmp();
            return;
        }
    }
    cout<<"NO\n";
    clearmp();
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        //cout<<"\n";
    }
    //timetaken();
    return 0;
} 