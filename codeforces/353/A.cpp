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

void solve(){
    ll n,s1=0,s2=0,flg=0;
    cin>>n;
    vector <pair<int,int>> a(n);
    rep(i,0,n-1){
        int x,y;
        cin>>x>>y;
        a[i] = {x,y};
        s1+=x;s2+=y;
        if(x%2+y%2==1){flg++;}
    }
    if(s1%2==0&&s2%2==0){
        cout<<"0";
        return;
    }
    else if(s1%2+s2%2==2&&flg>=1&&n>1){
        cout<<"1";
        return;
    }
    else{
        cout<<"-1";
        return;
    }


}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 