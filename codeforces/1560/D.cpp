#include <bits/stdc++.h>
using namespace std;

int cost(string s,string t){
  int p=0,q=0,cost=0,cnt=0;
  while(p<s.size()&&q<t.size()){
    if(s[p]==t[q]){
      p++;q++;
      cnt++;
    }
    else{
      p++;
    }
  }
  cost = (s.size()-cnt) + ( (q>=t.size())?0:(t.size()-cnt) ) ;
  return cost;
}

void solve(){
  string n;
  vector <string> pow2;
  cin>>n;
  long long int cur = 1;
  for(int i=0;i<62;i++){
    pow2.push_back(to_string(cur));
    //cout<<to_string(cur)<<" ";
    cur=cur*2;
  }

  int ans = INT_MAX;
  for(auto x:pow2){
    ans = min(ans,cost(n,x));
    //cout<<cost(n,x)<<" "<<x<<"\n";
  }
  cout<<ans;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
    cout<<"\n";
  }
}
