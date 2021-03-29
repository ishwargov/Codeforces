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
#define rep(i,k,n) for(ll i=(k);i<=(n);i++)
#define repi(i,k,n) for(ll i=(k);i>=(n);i--)
clock_t begtime = clock();
#define timetaken() cout << "\n\nTime elapsed: " << (float)(clock() - begtime)/1000.0

void solve(){
    string s,s2="";
    cin>>s;
    for(ll i=0;i<s.size();i++){
        s2 += s[i];
        ll j = 0;
        while(s[i]==s[i+j]&&i+j<s.size()){
            j++;
        }
        if(j>=2){
            s2 += s[i];
            i = i+j-1;
        }
    }
    s = s2;
    s2 = "";
    ll flg = 0;
    for(ll i=0;i<s.size();i++){
        s2 += s[i];
        ll j = 0;
        while(s[i]==s[i+j]&&i+j<s.size()){
            j++;
        }
        if(j>=2){
            if(!flg){
                s2 += s[i];
                flg = 1;
            }
            else{
                flg = 0;
            }
        }
        else{
            flg = 0;
        }
        i = i+j-1;
    }
    cout<<s2;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 