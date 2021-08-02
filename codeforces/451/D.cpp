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

void solve(){
    string s;
    cin>>s;
    ll odd[2]={0,0},even[2]={0,0},ansev=0,ansod=0;
    rep(i,0,s.size()-1){
        ll ch = s[i]-'a';
        if(i&1){
            ansev += even[ch];
            ansod += odd[ch]+1;   
            odd[ch]++;
        }
        else{
            ansev += odd[ch];
            ansod += even[ch]+1;
            even[ch]++;
        }
    }   
    cout<<ansev<<" "<<ansod;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 