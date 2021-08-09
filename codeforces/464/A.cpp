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
    ll n,p;
    string s;
    cin>>n>>p;
    cin>>s;
    if(p==1){
        cout<<"NO";
        return;
    }
    if(p==2){
        if(n==1){
            cout<<(s[0]=='a'?"b":"NO");
        }
        else{
            cout<<(s[0]=='a'?"ba":"NO");
        }
        return;
    }
    string t = s;
    s="  ";
    s+=t;
    repi(i,n+1,2){
		s[i]++;
		while (s[i]<'a'+p &&(s[i]==s[i-1]||s[i]==s[i-2])){
			s[i]++;
		}
		if (s[i]<'a'+p){
			rep(j,i+1,n+1){
				s[j]='a';
				while (s[j]==s[j-1]||s[j]==s[j-2])
					s[j]++;
			}
			break;
		}
		if (i==2){
			cout<<"NO";
            return;
        }
	}
    rep(i,2,s.size()-1){
        cout<<s[i];
    }
}
int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 