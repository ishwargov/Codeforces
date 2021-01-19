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
    ll v;
    vector <ll> dig(10,0);
    cin>>v;
    rep(i,1,9){
        cin>>dig[i];
    }
    string ans = "";
    ll cur = v;
    while(cur>0){
        ll mn = min_element(dig.begin()+1,dig.begin()+10)-dig.begin();
        repi(j,9,1){
            if(dig[j]==dig[mn]){
                mn = j;
                break;
            }
        }
        if(cur-2*dig[mn]<0&&cur-dig[mn]>0){
            repi(j,9,1){
                if(cur-dig[j]>=0){
                    cur -= dig[j];
                    ans += to_string(j);
                    break;
                }
            }
        }
        else if(cur >= dig[mn]){
            cur -= dig[mn];
            ans += to_string(mn);
        }
        else{
            break;
        }
    }
    if(ans.compare("")==0){
        cout<<"-1";
        return;
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        ll curdg = ans[i] - '0';
        repi(j,9,curdg+1){
            if(cur - dig[j] + dig[curdg]>=0){
                ans[i] = (char)(j+'0');
                cur  = cur + dig[curdg] - dig[j];
                break;
            }
        }
    }
    cout<<ans;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 