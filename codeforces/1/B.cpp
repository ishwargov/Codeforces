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

string alp_to_int(string s){
    ll rt = 0;
    ll i = s.size()-1;
    while(i>=0){
        rt += pow(26,s.size()-i-1)*(s[i]-'A'+1);
        i--;
    }
    string ret = to_string(rt);
    return ret;
}

string int_to_alp(string num){
    ll nm = stoi(num);
    string ret;
    while(nm>0){
        if(nm%26==0){
            ret += 'Z';
            nm--;
        }
        else{
            ret += (char)(nm%26+'A'-1);
        }
        nm/=26;
    }
    reverse(ret.begin(),ret.end());
    return ret;
} 

void solve(){
    string s,num1,num2;
    ll n1,n2;
    cin>>s;
    ll flg = 0;
    if(s[0]=='R'){
        ll i = 1;
        while(s[i]<='9'&&s[i]>='0'&&i<s.size()){
            num1 += s[i];
            i++;
        }
        if(s[i]=='C'&&i!=1){
            i++;
            while(i<s.size()){
                num2+=s[i];
                i++;
            }
            flg=1;
        }
    }
    //cout<<num1<<" "<<num2<<" "<<flg<<"\n";
    if(flg){
        string ans;
        ans = int_to_alp(num2) + num1;
        cout<<ans; 
    }   
    else{
        string ans,rw;
        ll i = s.size()-1;
        while(s[i]<='9'&&s[i]>='0'&&i>=0){
            rw += s[i];
            i--;
        }
        reverse(rw.begin(),rw.end());
        string col = s.substr(0,i+1);
        ans = "R" + rw + "C" + alp_to_int(col);
        cout<<ans;
    } 
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    int T;
    cin>>T;
    rep(t,1,T){
    //    cout<<"Case #"<<t<<": ";
        solve();
        cout<<"\n";
    }
    //timetaken();
    return 0;
} 