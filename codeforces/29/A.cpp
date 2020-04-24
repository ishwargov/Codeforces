#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll n,x[101],d[101],flag=0;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>x[i]>>d[i];
    }
   for(ll i=0;i<n;i++){
       ll sp=x[i]+d[i];
       ll in=find(x,x+n,sp)-x;
       if((x[in]+d[in])==x[i]){
        flag++;
        break;
       }
   }
   if(flag>0){
       cout<<"YES";
   }
   else
    cout<<"NO";

}
int main()
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}