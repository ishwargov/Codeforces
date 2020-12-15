/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define M 1000000007
#define M_PI 3.14159265358979323846
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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    char ch[2] = {'A','B'};
    ll cost1 = 0,cost2=0;
    if(k==2){
        rep(i,0,n-1){
            if(s[i]!=ch[i%2]){
                cost1++;
            }
        }
        rep(i,0,n-1){
            if(s[i]!=ch[(i+1)%2])
                cost2++;
        }
        if(cost2<cost1){
            cout<<cost2<<"\n";
            rep(i,0,n-1){
                cout<<ch[(i+1)%2];
            }
        }
        else{
            cout<<cost1<<"\n";
            rep(i,0,n-1){
                cout<<ch[i%2];
            }
        }
        return;
    }
    ll cost = 0;
    rep(i,0,n-2){
        if(s[i]==s[i+1]){
            ll m = 0;
            ll t = i;
            while(s[t]==s[t+1]&&t+1<n){
                m++;
                t++;
            }
            m++;
            if(m%2==0){
                char ch1 = 'A';
                while(ch1==s[i]||ch1==s[i+m]){
                    ch1 = (char)(((ch1-'A')+1)%k + 'A');
                    //cout<<ch1;
                }
                rep(j,0,m-1){
                    if(j%2==1){
                        s[i+j] = ch1; 
                    }
                }
            }
            else{
                rep(j,0,m-1){
                    if(j%2==1){
                        s[i+j] = (char)((s[i+j]-'A'+1)%k + 'A');
                    }
                }
            }
            cost += m/2;
            i = i+m-1;
            //cout<<i<<" ";
        }
    }
    cout<<cost<<"\n";
    cout<<s;
}

int main(){   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 