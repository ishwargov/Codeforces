/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define PI acos(-1)
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

int n[3];
vector<int>v[3];
ll sum[3],ans;
int main(){
	rep(i,0,2)scanf("%d",&n[i]);
	rep(i,0,2){
		v[i].resize(n[i]);
		rep(j,0,n[i]-1)scanf("%d",&v[i][j]),sum[i]+=v[i][j];
		sort(v[i].begin(),v[i].end());
	}
	rep(i,0,2)rep(j,i+1,2){
		ans=max(ans,sum[0]+sum[1]+sum[2]-v[i][0]*2-v[j][0]*2);
	}
	rep(i,0,2){
		ans=max(ans,sum[0]+sum[1]+sum[2]-sum[i]*2);
	}
	printf("%lld\n",ans);
	return 0;
}