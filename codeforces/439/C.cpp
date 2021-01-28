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
    ll n,k,p;
    cin>>n>>k>>p;
    ll nod=0,nev=0;
    vector <ll> a(n),od,ev;
    ll rod = k-p,rev = p;
    rep(i,0,n-1){
        cin>>a[i];
        if(a[i]&1){nod++;od.pb(a[i]);}
        else {ev.pb(a[i]);nev++;}
    }
    if(rod>nod||!(rev<=(nod-rod)/2+nev&&(rod-nod)%2==0)){
        cout<<"NO";
        return;
    }
    vector <vector <ll>> ans;
    for(ll i=0;i<rod-1;i++){
        vector <ll> tmp;
        tmp.pb(od[od.size()-1]);
        od.pop_back();
        ans.pb(tmp);
    }
    if(rev==0){
        vector <ll> fin;
        while(od.size()>0||ev.size()>0){
            if(od.size()>0){
                fin.pb(od[od.size()-1]);
                od.pop_back();
            }
            else if(ev.size()>0){
                fin.pb(ev[ev.size()-1]);
                ev.pop_back();
            }
        }
        ans.pb(fin);
        cout<<"YES\n";
        for(ll i=0;i<k;i++){
            cout<<ans[i].size()<<" ";
            for(ll j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
        return;
    }
    else if(rod>0){
        vector <ll> tmp;
        tmp.pb(od[od.size()-1]);
        od.pop_back();
        ans.pb(tmp); 
    }
    for(ll i=0;i<rev-1;i++){
        vector <ll> tmp;
        if(od.size()>1){
            tmp.pb(od[od.size()-1]);
            od.pop_back();
            tmp.pb(od[od.size()-1]);
            od.pop_back();
            ans.pb(tmp);
        }
        else{
            tmp.pb(ev[ev.size()-1]);
            ev.pop_back();
            ans.pb(tmp);
        }
    }
    vector <ll> fin;
    while(od.size()>0||ev.size()>0){
        if(od.size()>0){
            fin.pb(od[od.size()-1]);
            od.pop_back();
        }
        else if(ev.size()>0){
            fin.pb(ev[ev.size()-1]);
            ev.pop_back();
        }
    }
    ans.pb(fin);
    cout<<"YES\n";
    for(ll i=0;i<k;i++){
        cout<<ans[i].size()<<" ";
        for(ll j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 