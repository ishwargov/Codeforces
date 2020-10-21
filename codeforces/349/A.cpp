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
    ll n,c1=0,c2=0,c3=0;
    cin>>n;
    int flag = 0;
    rep(i,0,n-1){
        ll inp;
        cin>>inp;
        if(inp==25){
            c1++;
            continue;
        }
        else if(inp==50){
            if(c1==0)
                flag++;
            else{
                c1--;
                c2++;
            }
            continue;
        }
        else if(inp==100){
            if(c2==0){
                if(c1<3){
                    flag++;
                    continue;
                }
                else{
                    c1-=3;
                    c3++;
                    continue;
                }
            }
            else{
                if(c1==0){
                    flag++;
                    continue;
                }
                else{
                    c1--;
                    c3++;
                    c2--;
                }
            }
        }
    }
    if(flag==0){cout<<"YES";}
    else{cout<<"NO";}
}   

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 