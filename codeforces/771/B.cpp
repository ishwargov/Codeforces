#include <bits/stdc++.h>
using namespace std;
#define ll long long int

string int_str(int cnt){
  string s = "";
  for(int i=0;i<6;i++){
    s += string(1,(char)((int)'a'+cnt%10));
    cnt/=10;
  }
  return s;
}

int main(){
  int n,k;
  cin>>n>>k;
  bitset<55> b;
  for(int i=0;i<n-k+1;i++){
    string s;
    cin>>s;
    b[i] = (s.compare("YES")==0)?1:0;
  }

  vector <string> s(n);
  for(int i=0;i<n;i++){
    s[i] = int_str(i);
    //cout<<int_str(i);
  }
  int pre=0;
  for(int i=0;i<n-k+1;i++){
    if(!b[i]&&pre==0){
      s[i+k-1] = s[i];
      pre=0;
    }
    else if(!b[i]&&pre==1){
      s[i+k-1] = s[i];
      pre = 0;
    }
    else{
      pre = 1;
    }
  }
  for(int i=0;i<n;i++){
    cout<<"A"+s[i]<<" ";
  }
  return 0;
}
