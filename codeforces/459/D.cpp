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
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

const int MAXN = 1e6+1;
int fen[MAXN];
int rem[MAXN], cnt[MAXN], a[MAXN], b[MAXN], sz;

void add(int x, int val){
    for (int i = x + 1; i < MAXN; i += i & (-i)) fen[i] += val;
}
 
int get(int x){
    int ans = 0;
    for (int i = x; i > 0; i -= i & (-i)) ans += fen[i];
    return ans;
}
 
int sum(int x, int y){
    return get(y) - get(x);
}

void solve(){
    ll n;
    cin>>n;
    rep(i,0,n-1) cin>>a[i],b[i] = a[i];
    sort(b,b+n);
    ll sz = unique(b,b+n) - b;
    rep(i,0,n-1){
        a[i] = lower_bound(b,b+sz,a[i]) - b;
    }
    repi(i,n-1,0){
        cnt[a[i]] ++;
        add(cnt[a[i]], 1);
 
        rem[i] = cnt[a[i]];
    }
 
    memset(cnt, 0, sizeof cnt);
    ll ans = 0;
    rep(i,0,n-1){
        add(rem[i], -1);
        cnt[a[i]] ++;
        ans += sum(1, cnt[a[i]]);
    }
 
    cout <<ans;
    return;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 