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
int check(ll a[100001],ll b[100001],ll n){
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
            return 0;
    }
    return 1;
}

void solve(){
    ll n,a[100001],b[100001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    ll l=0,r=n-1;
    sort(b,b+n);
    if(check(a,b,n)){
        cout<<"yes\n"<<"1 1";
        return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            l = i;
            break; 
        }
    }
    for(int i=n-1;i>l;i--){
        if(a[i-1]>a[i]){
            r = i;
            break;
        }
    }
    //cout<<l<<" "<<r<<"\n";
    reverse(a+l,a+r+1);
    if(check(a,b,n))
        cout<<"yes\n"<<l+1<<" "<<r+1;
    else
        cout<<"no";
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}