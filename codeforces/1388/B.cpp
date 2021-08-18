#include <bits/stdc++.h>
using namespace std;

void solve(){
  int n;
  cin>>n;
  int n1 = n - n/4 - (n%4!=0);
  int n2 = n - n1;
  while(n1--) cout<<"9";
  while(n2--) cout<<"8";
  cout<<"\n";
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
}
