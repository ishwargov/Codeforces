#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,v,a[100001];
    cin>>n>>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);ll tv=0;
    for(int i=0;i<n-1;i++){
        tv+=a[i];
    }
    if(tv<=v){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
}

int main()
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}