#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll t;cin>>t;
    while(t--){
        ll p,a[3],ans=LLONG_MAX;
        cin>>p>>a[0]>>a[1]>>a[2];
        for(int i=0;i<3;i++){
            if(p>a[i]&&p%a[i]!=0){
                ans = min(ans,a[i] - p%a[i]);
            }
            else if(p>a[i]&&p%a[i]==0){
                ans = min(ans,(ll)0);
            }
            else{
                ans = min(ans,a[i]-p);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
