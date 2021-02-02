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
    ll n1,n2,sa=-1e9,sb=1e9,cura,curb;
    cin>>n1;
    vector <ll> a(n1);
    rep(i,0,n1-1){cin>>a[i];}
    cin>>n2;
    vector <ll> b(n2);
    rep(i,0,n2-1){cin>>b[i];}
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    repi(i,n1-1,0){
        ll cur = a[i],j=i-1;
        while(j>=0&&a[j]==cur){j--;}
        cura = (j+1)*2 + (n1-j-1)*3; 
        ll pos = lower_bound(b.begin(),b.end(),cur) - b.begin();
        --pos;
        curb = (pos+1)*2 + (n2-pos-1)*3;
        if(cura-curb>sa-sb||(cura-curb==sa-sb&&cura>sa)){
            sa = cura;
            sb = curb;
        }
        i = j+1;
    }
    cura = 2*n1,curb = 2*n2;
    if(cura-curb>sa-sb||(cura-curb==sa-sb&&cura>sa)){
            sa = cura;
            sb = curb;
    }
    cout<<sa<<":"<<sb;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 