/* SupremeLord Ishwar Govind */
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
#define rep(i,k,n) for(ll i=(k);i<=(n);i++)
#define repi(i,k,n) for(ll i=(k);i>=(n);i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

 
int n, r1, r2, c1, c2, t[60][60], nr[60][60];
vector <pair <int, int> > v1;
vector <pair <int, int> > v2;
char s[110];
 
int wyn=1000000000;

void dfs1(int r, int c){
	nr[r][c]=1;
	v1.push_back(make_pair(r, c));
	if(t[r+1][c])
	{
		if(!nr[r+1][c])
		{
			dfs1(r+1, c);
		}
	}
	if(t[r-1][c])
	{
		if(!nr[r-1][c])
		{
			dfs1(r-1, c);
		}
	}
	if(t[r][c+1])
	{
		if(!nr[r][c+1])
		{
			dfs1(r, c+1);
		}
	}
	if(t[r][c-1])
	{
		if(!nr[r][c-1])
		{
			dfs1(r, c-1);
		}
	}
}
 
void dfs2(int r, int c){
	nr[r][c]=2;
	v2.push_back(make_pair(r, c));
	if(t[r+1][c])
	{
		if(!nr[r+1][c])
		{
			dfs2(r+1, c);
		}
	}
	if(t[r-1][c])
	{
		if(!nr[r-1][c])
		{
			dfs2(r-1, c);
		}
	}
	if(t[r][c+1])
	{
		if(!nr[r][c+1])
		{
			dfs2(r, c+1);
		}
	}
	if(t[r][c-1])
	{
		if(!nr[r][c-1])
		{
			dfs2(r, c-1);
		}
	}
}
 
void solve(){
	cin>>n>>r1>>c1>>r2>>c2;
	for(int i=1; i<=n; ++i)
	{
		scanf("%s", s);
		for(int j=1; j<=n; ++j)
		{
			if(s[j-1]=='0')
			{
				t[i][j]=1;
			}
		}
	}
	dfs1(r1, c1);
	if(nr[r2][c2]==1)
	{
		cout<<0;
		return;
	}
	dfs2(r2, c2);
	for(int i=0; i<(int)v1.size(); ++i)
	{
		for(int j=0; j<(int)v2.size(); ++j)
		{
			wyn=min(wyn, (v1[i].first-v2[j].first)*(v1[i].first-v2[j].first)+(v1[i].second-v2[j].second)*(v1[i].second-v2[j].second));
		}
	}
	cout<<wyn;
    return;
}

int main(){     
    solve();
    //timetaken();
    return 0;
} 