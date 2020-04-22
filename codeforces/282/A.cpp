#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll n;
    cin>>n;
    ll x=0;
    for(auto i=0;i<n;i++){
        string s;
        cin>>s;
        if((s.compare("X++")==0)||(s.compare("++X")==0))
            x++;
        else if((s.compare("X--")==0)||(s.compare("--X")==0))
            x--;
    }
    cout<<x;
}

int main()
{   
    ios::sync_with_stdio(0);
	cin.tie(0);
    solve();
    return 0;
}