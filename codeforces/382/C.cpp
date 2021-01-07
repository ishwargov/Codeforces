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
    ll n;
    cin>>n;
    vector <ll> a(n);
    set <ll> apn;
    rep(i,0,n-1){cin>>a[i];}
    if(n==1){cout<<"-1"; return;}
    sort(a.begin(),a.end());
    if(all_of(a.begin(),a.end(),[&](ll &x){return (x == a[0]);})){
        cout<<"1\n"<<a[0];
        return;
    }
    if(n==2){
        ll diff = a[1] - a[0];
        apn.insert(a[0]-diff);apn.insert(a[1]+diff);
        if((a[0]+a[1])%2==0){apn.insert((a[0]+a[1])/2); }
        cout<<apn.size()<<"\n";
        for(auto x:apn){cout<<x<<" ";}
        return;
    }
    vector <ll> df(n);
    set <int> diff;
    rep(i,1,n-1){
        df[i] = a[i] - a[i-1];
        diff.insert(df[i]);
    }
    if(diff.size()>2){
        cout<<"0";
        return;
    }
    if(diff.size()==1){
        cout<<"2\n";
        cout<<a[0]-df[1]<<" "<<a[n-1]+df[1];
        return;
    }    
    ll cnt[2]={0,0},dfc[2];
    rep(i,1,n-1){
        if(df[i]==*diff.begin()){cnt[0]++;}
        else cnt[1]++;
    }
    if(diff.size()==2){
        if(cnt[1]>1&&cnt[0]>1){cout<<"0";return;}
        dfc[0] = *diff.begin();
        dfc[1] = *(++diff.begin());
        if(cnt[0]==1&&cnt[1]==1){
            if(df[1]%2==0&&df[1]/2==df[2]){
                cout<<"1\n"<<a[0]+df[1]/2;
                return;
            }   
            if(df[2]%2==0&&df[2]/2==df[1]){
                cout<<"1\n"<<a[1]+df[2]/2;
                return;
            }
        }
        if(cnt[0]==1){
            rep(i,1,n-1){
                if(df[i]==dfc[0]){
                    if(df[i]%2==0&&df[i]/2==dfc[1]){
                        cout<<"1\n"<<a[i]+df[i]/2;
                        return;
                    }
                }
            }
        }
        else if(cnt[1]==1){
            rep(i,1,n-1){
                if(df[i]==dfc[1]){
                    if(df[i]%2==0&&df[i]/2==dfc[0]){
                        cout<<"1\n"<<a[i-1]+df[i]/2;
                        return;
                    }
                }
            }
        }        
    }
    cout<<"0";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 