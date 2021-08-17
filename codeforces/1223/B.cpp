#include <bits/stdc++.h>
using namespace std;
int main(){
  int q;
  cin>>q;

  while(q--){
    string s,t;
    bool flg = 0;
    cin>>s>>t;
    int cnt[2][26];
    memset(cnt,0,sizeof(cnt));
    for(int i=0;i<s.size();i++) cnt[0][s[i] - 'a']++;
    for(int i=0;i<s.size();i++) cnt[1][t[i] - 'a']++;
    for(int i=0;i<26;i++){
      if(cnt[0][i]>0&&cnt[1][i]>0){
        cout<<"YES\n";
        flg = 1;
        break;
      }
    }
    if(!flg) cout<<"NO\n";
  }
  return 0;
}
