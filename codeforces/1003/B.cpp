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
    ll a,b,x;
    cin>>a>>b>>x;
    //x = a+b-1-x;
    string s="";
    ll flg = 0;     ;
    while(a>0&&b>0&&x>1){
        s += "01";
        --x,--a,--b;
        if(flg) --x;
        flg = 1;
    }  
    if(x==1){
        if(b==0){
            while(a>0){
                s=s+"0";
                --a;
            }
        }
        else if(a==0){
            while(b>0){
                s="1"+s;
                --b;
            }
        }
        else{
            while(b>0){
                s+="1";
                --b;
            }
            while(a>0){
                s+="0";
                --a;
            }
        }
    }
    else{
        while(b>0){
            s+="1";
            --b;
        }
        while(a>0){
            s = "0"+s;
            --a;
        }
    }
    cout<<s;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 