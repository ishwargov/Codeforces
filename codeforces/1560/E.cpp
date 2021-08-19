#include <bits/stdc++.h>
using namespace std;

void solve(){
  string t;
  cin>>t;
  vector<char> ord;
  vector<int> vis(26,0),cnt(26,0);
  for(int i=t.size()-1;i>=0;i--){
    if(!vis[t[i]-'a']){
      ord.push_back(t[i]);
      vis[t[i]-'a']=1;
    }
    cnt[t[i]-'a']++;
  }

  reverse(ord.begin(),ord.end());
  int len = ord.size(),sz=0;
  bool flg = 0;

  for(int i=0;i<ord.size();i++){
    sz += cnt[ord[i]-'a']/(i+1);
    if(cnt[ord[i]-'a']%(i+1)!=0) flg=1;
  }

  if(flg){
    cout<<-1;
    return;
  }

  for(int i=0;i<26;i++) vis[i] = 0;

  string s="",ans = t.substr(0,sz),nxt=ans,nxt2;
  for(int i=0;i<ord.size();i++){
    s = s+nxt;
    nxt2 = "";
    vis[ord[i]-'a']=1;
    for(int j=0;j<nxt.size();j++){
      if(!vis[nxt[j]-'a']){
        nxt2 += string(1,nxt[j]);
      }
    }
    nxt = nxt2;
  }
  
  if(s.compare(t)!=0){cout<<-1;return;}
  cout<<ans<<" "<<string(ord.begin(),ord.end());
}

int main(){
  int T;
  cin>>T;
  while(T--){
    solve();
    cout<<"\n";
  }
}
