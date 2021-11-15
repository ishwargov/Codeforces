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

bool ssq(string str1,string str2)
{   int m = str1.size();
    int n = str2.size();
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}

void solve(){
    string s,t;
    cin>>s;
    cin>>t;
    int n = s.size();
    int m = t.size();
    int mx = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(ssq(t,  s.substr(0,i) + s.substr(j+1,n-1-j-1+1) )){
                mx = max(mx,(j-i+1));
            }
        }
    }
    cout<<mx;
}

int main(){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    //timetaken();
    return 0;
} 