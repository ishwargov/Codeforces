#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,ans=0;
        cin>>n;
        vector <ll> a(n),mp(2*n+2,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=2*n;i>=1;i--){
            if(mp[i]>1&&mp[i+1]==0){
                ans+=2;
                mp[i]--;
            }
            else if(mp[i]==1&&mp[i+1]==0){
                ans++;
                mp[i]--;
            }
            else if(mp[i]>=1){
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
}