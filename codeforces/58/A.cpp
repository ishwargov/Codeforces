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
    ll flag = 0;
    if(s.size()<5){
        cout<<"NO";
        return;
    }
    rep(i,0,s.size()-2){
        flag = 0;
        if(s[i]=='h'){
            flag++;
            ll j = i+1;
            for(;j<s.size();j++){
                if(s[j]=='e'){
                    flag++;
                    break;
                }
            }
            //cout<<flag<<" "<<j<<"\n";
            for(;j<s.size();j++){
                if(s[j]=='l'){
                    flag++;
                    j++;
                    break;
                }
            }
            for(;j<s.size();j++){
                if(s[j]=='l'){
                    flag++;
                    break;
                }
            }
            //cout<<flag<<" "<<j<<"\n";
            for(;j<s.size();j++){
                if(s[j]=='o'){
                    flag++;
                    break;
                }
            }
        }
        if(flag>=5)
            break;
    }
    //cout<<flag<<" ";
    if(flag==5){
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