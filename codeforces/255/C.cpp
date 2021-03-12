#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n';
#define floop(i,a,b) for(int i=a;i<=b;++i)


int visited[1000010];
int a[4001],dp[4001][4001];
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>>n;
	set<int>b;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		b.insert(a[i]);
	}
	int k=0;
	for(auto it:b){
		visited[it]=k;
		k++;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i]=visited[a[i]];
	}
	for (int i = 0; i < n; ++i)
	{
		bool flag=0;
		for(int j=i-1;j>=0;--j){
			if(a[i]==a[j]){
				if(flag) continue;
				flag=1;
				dp[a[i]][a[j]]++;
			}
			else{
				dp[a[i]][a[j]]=max(dp[a[i]][a[j]],1+dp[a[j]][a[i]]);
			}
		}
	}
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans+1<<endl;
	return 0;
}