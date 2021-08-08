#include <bits/stdc++.h>
using namespace std;

void solve(){
  vector<int>inc;   
  int N;
  cin>>N;
  for (int i=1;i<=N;i*=2){
    inc.push_back(i);
    N-=i;
  }
  if (N>0){
    inc.push_back(N);
    sort(inc.begin(),inc.end());
  }
  cout<<inc.size()-1<<endl;
  for (int i=1;i<(int)inc.size();i++)
    cout<<inc[i]-inc[i-1]<<' ';
  cout<<endl;
}

int main(){
  int t; cin>>t;
  while (t--)
    solve();
}