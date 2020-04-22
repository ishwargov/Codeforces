#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n;
    cin>>n;
    ll s=1,x,i=1;
    while((n/s)>=1)
    {   
        if((n%s)==0)
            x=(n/s);
       // cout<<s<<","<<x<<"\t";
        s=s+pow(2,i);
        
        i++;
    }

   cout<<x<<"\n";
}

int main()
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        solve();
    }
    return 0;
}