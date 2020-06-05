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
    ll n,s;
    cin>>n>>s;
    if(n==1&&s==0){
        cout<<"0 0";
        return;
    }
    if(s<1||s>n*9){
        cout<<"-1 -1";
        return;
    }
    ll k=s;
    vector <ll> a(n,9);
    vector <ll> b(n,0);
    b[0] = 1;k--;
    for(int i=0;i<n;i++){
        if(s-a[i]>0){
            s = s-a[i];
        }
        else{
            a[i] = s;
            s = 0;
        }
    }
    for(int i=n-1;i>=0;i--){
        
        if(k>=9){
            b[i] += 9;
            k -=9;
        }
        else{
            b[i] += k;
            k=0;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<b[i];
    }
    cout<<" ";
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}