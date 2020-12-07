/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define fi first    
#define se second
#define pb push_back
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define rep(i,k,n) for(ll i=k;i<=n;i++)
#define repi(i,k,n) for(ll i=k;i>=n;i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

ll umap[100005];
ll a[100005];
void solve(){
    ll n,k;
    cin>>n>>k;
    memset(umap,0,sizeof(umap));
    rep(i,0,n-1){
        cin>>a[i];
    }
    ll l=0,r=n-1,cnt=0;
    rep(i,0,n-1){
        umap[a[i]]++;
        if(umap[a[i]]==1)
            cnt++;
    }
    ll cur = cnt;
    if(cur<k){
        cout<<"-1 -1";
        return;
    }
    while(cur>=k){
        if(umap[a[r]]>1){
            umap[a[r]]--;
            r--;
        }
        else{
            umap[a[r]]--;
            cur--;
            r--;
        }
    }
    r++;
    umap[a[r]]++;
    cur++;
    while(cur>=k){
        if(umap[a[l]]>1){
            umap[a[l]]--;
            l++;
        }
        else{
            umap[a[l]]--;
            l++;
            cur--;
        }
    }
    l--;
    umap[a[l]]++;
    if(umap[a[l]]<=1)
        cur++;
    cout<<l+1<<" "<<r+1;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 