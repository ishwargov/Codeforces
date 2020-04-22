#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;ll arr[20001];
    cin>>n;
    ll eve=2,odd=1;
    if(n%4!=0){
        cout<<"NO"<<"\n";
        return;
    }
    else{
        cout<<"YES"<<"\n";
        for(ll i=0;i<(n/2);i++){
            cout<<eve<<" ";
            eve+=2;
         }
        for(ll i=0;i<((n/2)-1);i++){
            cout<<odd<<" ";
             odd+=2;
            }
        odd=odd + (n/2) ;
        cout<<odd<<"\n";
    }
    
}

int main()
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        //cout<<"Case #"<<t<<": ";
        solve();
    }
    return 0;
}