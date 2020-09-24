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
    string s;
    cin>>s;
    vector <ll> a;
    rep(i,0,s.size()-1){
        if(s[i]=='1'){
            ll cnt=0;
            while(s[i]=='1'&&i<s.size()){
                cnt++;
                i++;
            }
            a.pb(cnt);
            if(s[i]=='0')
                i--;
        }
        else{
            ll cnt=0;
            while(s[i]=='0'&&i<s.size()){
                cnt++;
                i++;
            }
            a.pb(cnt);
            if(s[i]=='1')
                i--;
        }
    }
    if(*max_element(a.begin(),a.end())>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 