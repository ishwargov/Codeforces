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
    ll n,x,a[1001],odd=0,eve=0;
    cin>>n>>x;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) 
            eve++;
    }
    odd = n-eve;
    if(odd<1){
        cout<<"No";
        return;
    }   
    else{
        if(x-eve<=1){cout<<"Yes";return;}
        for(int i=0;i<=eve;i++){
            if(odd<(x-i)){continue;}
            if((x-i)%2!=0){cout<<"Yes";return;}
        }
    }
    cout<<"No";
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