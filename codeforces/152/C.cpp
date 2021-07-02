#include <iostream>
#include <vector>
#include <string>

int main(){
    int n,m,M=1e9+7;
    long long int ans = 1;
    std::cin>>n>>m;
    std::vector <std::string> s(n);
    for(int i=0;i<n;i++) std::cin>>s[i];
    for(int i=0;i<m;i++){
        int cnt = 0;bool alp[26]={0};
        for(int j=0;j<n;j++){
            if(!alp[s[j][i]-'A']) alp[s[j][i]-'A']=1,cnt++;
        }
        ans = ((ans%M)*(cnt%M))%M;
    }
    std::cout<<ans;
}