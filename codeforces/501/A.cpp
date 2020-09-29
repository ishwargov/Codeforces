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

void solve(){
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll m1 = max(3*a/10,a - (a*c)/250);
	ll m2 = max(3*b/10,b - (b*d)/250);
	if(m1>m2){
		cout<<"Misha";
	}
	else if(m1<m2){
		cout<<"Vasya";
	}
	else{
		cout<<"Tie";
	}
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 