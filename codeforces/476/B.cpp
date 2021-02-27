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

ll fac[20];

ll C(ll n,ll r){ 
    return(fac[n]/(fac[n-r]*fac[r]));
}

void solve(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    ll cnt1=0,cnt2=0,ext=0;
    for(auto ch:s1){
        cnt1 += (ch=='+'?1:-1);
    }
    for(auto ch:s2){
        if(ch=='+') cnt2++;
        else if(ch=='-') cnt2--;
        else ext++;
    }
    if(ext==0&&cnt1==cnt2){
        cout<<1;
        return;     
    }
    if(abs(cnt2-cnt1)>ext){
        cout<<0;
        return;
    }
    ll r = abs(cnt2-cnt1) + (abs(cnt2-cnt1)<ext?(ext - abs(cnt2-cnt1))/2:0);
    ll comb = C(ext,r);
    //cout<<comb<<"\n";
    long double ans = (long double)comb;
    for(ll i=0;i<ext;i++){
        ans = ans/2;
    }
    printf("%.12Lf",ans);
}

int main(){   
    fac[0] = 1;
    rep(i,1,19){
        fac[i] = fac[i-1]*i;
    }
    solve();
    return 0;
} 