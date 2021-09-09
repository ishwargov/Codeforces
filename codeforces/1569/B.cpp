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
#define timetaken() cout << "\n\nTime elapsed: " << (double)(clock() - begtime)/CLOCKS_PER_SEC

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<char>> ans(n,vector<char>(n,'='));
    vector<int> pos2;
    int cnt[2]={0,0};
    for(int i=0;i<n;i++){ 
        cnt[s[i]-'1']++;
        if(s[i]=='2'){
            pos2.push_back(i);
        }
    }

    //cout<<cnt[0]<<" "<<cnt[1]<<"\n";
    if(cnt[1]==1||cnt[1]==2){ cout<<"NO";return; }
    int cur = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){ ans[i][i]='X'; continue; }
        for(int j=0;j<n;j++){
            if(i==j) ans[i][i] = 'X';
            else if(j==pos2[(cur+1)%cnt[1]]) ans[i][j] = '+';
            else if(j==pos2[(cur-1+cnt[1])%cnt[1]]) ans[i][j] = '-';
            else ans[i][j] = '=';
        }
        if(s[i]=='2') cur++;
    }

    cout<<"YES";
    for(int i=0;i<n;i++){
        cout<<"\n";
        for(int j=0;j<n;j++){
            cout<<ans[i][j];
        }
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