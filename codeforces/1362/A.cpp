#include <bits/stdc++.h>
using namespace std;
#define M 1000000009
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound


void solve(){
    long double a,b,ans=0,lrg,sml;
    ll pow=0,pow2=0,pow4=0,pow8=0;
    cin>>a>>b;
    if(a>b){
        lrg = a;
        sml = b;
    }
    else{
        lrg = b;
        sml = a;
    }
    //printf("%.10f\t",lrg/sml);
    ans = log2(lrg/sml);
    //cout<<ans<<"\n";
    if((ans - (int)ans)!=0){
        cout<<"-1";
        return;
    }
    pow = (int)ans;
    pow8 = pow/3;
    pow = pow%3;
    pow4 = pow/2;
    pow = pow%2;
    pow2 = pow;

    cout<<pow8+pow4+pow2;

}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        solve();
        cout<<"\n";
    }
    return 0;
}