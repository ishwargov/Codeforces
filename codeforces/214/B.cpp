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

void printnum(ll cnt[],ll s){
    if(cnt[0]==0||(s==0&&cnt[0]==0)){
        cout<<-1;
        return;
    }
    if(cnt[0]>0&&s==0){cout<<0;return;}
    repi(i,9,0){
        while(cnt[i]>0){cout<<i;cnt[i]--;}
    }
    return;
}

void solve(){
    ll n;
    cin>>n;
    ll cnt[10] = {0},s=0;
    rep(i,0,n-1){
        ll x;
        cin>>x;
        cnt[x]++;
        s += x;
    }
    if(cnt[0]==0){
        cout<<-1;
        return;
    }
    if(s%3==0){
        printnum(cnt,s);
        return;
    }
    else if(s%3==1){
        rep(i,0,9){
            if(i%3==1&&cnt[i]>0){
                cnt[i]--;
                s -= i;
                printnum(cnt,s);
                return;
            }
        }
        rep(i,0,9){
            if(i%3==2&&cnt[i]>0){
                cnt[i]--;
                s -= i;
                i--;
                if(s%3==0){
                    printnum(cnt,s);
                    return;
                }
            }
        }
    }
    else if(s%3==2){
        rep(i,0,9){
            if(i%3==2&&cnt[i]>0){
                cnt[i]--;
                s -= i;
                printnum(cnt,s);
                return;
            }
        }
        rep(i,0,9){
            if(i%3==1&&cnt[i]>0){
                cnt[i]--;
                s -= i;
                i--;
                if(s%3==0){
                    printnum(cnt,s);
                    return;
                }
            }
        }
    }
}


int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
} 