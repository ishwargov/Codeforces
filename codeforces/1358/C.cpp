#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
  ll x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  cout<<(x2-x1)*(y2-y1)+1;
}

int main(){
  int T;
  cin>>T;
  while(T--){
    solve();
    cout<<"\n";
  }
}
