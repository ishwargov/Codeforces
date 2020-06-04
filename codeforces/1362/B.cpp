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
    ll n,a[1025],xr=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<1024;i++){
        ll flag=0;
        for(int j=0;j<n;j++){
            if(find(a,a+n,(i^a[j]))==a+n){
                flag++;
            }
        }
        if(flag==0){
            xr = i;
            break;
        }
    }
    cout<<xr;
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