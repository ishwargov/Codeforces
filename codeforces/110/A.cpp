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

void luck(ll cnt){
    if(cnt==0){
        cout<<"NO";
        return;
    }
    for(int i=1;cnt/i>0;i=i*10){
        if((cnt/i)%10!=7&&(cnt/i)%10!=4){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}
void solve(){
    string s;
    ll cnt=0;
    cin>>s;
    rep(i,0,s.length()-1){
        if(s[i]=='4'||s[i]=='7')
            cnt++;
    } 
    luck(cnt);
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 