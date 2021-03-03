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

void solve(){
    string s;
    cin>>s;
    ll n = s.size();
    ll cnt[3]={0,0,0};
    rep(i,0,n-1){
        cnt[s[i]-'A']++;
    }
    char lft = s[0],rgt = s[n-1];
    rep(i,0,n-1){
        //cout<<s[i];
        if(s[i]==lft){
            s[i] = '(';
        }
        else if(s[i]==rgt){
            s[i] = ')';
        }
        else{
            if(cnt[lft-'A']>cnt[rgt-'A']){
                s[i] = ')';
            }
            else{
                s[i] = '(';
            }
        }
    }
    stack <char> brc;
    rep(i,0,n-1){
        if(s[i]=='('){
            brc.push('(');
        }
        else{
            if(brc.size()>0){
                brc.pop();
            }
            else{
                cout<<"NO";
                return;
            }
        }
    } 
    if(brc.size()>0){
        cout<<"NO";
    }   
    else{
        cout<<"YES";
    }
}

int main(){   
    int T;
    cin>>T;
    rep(t,1,T){
        solve();
        cout<<"\n";
    }
    return 0;
} 