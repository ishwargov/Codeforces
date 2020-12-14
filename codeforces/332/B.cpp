
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <string.h>
#include <queue>
#include <map>
#include <set>
#include <math.h>
#include <sstream>
using namespace std;
 
typedef long long ll; 
int a[222222];
ll sum[222222];
ll ans,pre;
int n,k,ans1,ans2;
 
int main(){
    while (scanf("%d%d",&n,&k)==2){
        for (int i=1;i<=n;++i) scanf("%d",&a[i]);
        sum[0]=0;
        for (int i=1;i<=n;++i) sum[i]=sum[i-1]+a[i];
        
        ans = 0;
        int j = k;
        pre = k;
        for (int i=k*2;i<=n;++i){
            if (sum[i]+sum[j]-sum[i-k]-sum[j-k]>ans){
                ans=sum[i]+sum[j]-sum[i-k]-sum[j-k];
                ans1=j;
                ans2=i;
            }
            pre++;
            if (sum[pre]-sum[pre-k]>sum[j]-sum[j-k]) j=pre;
        }
        printf("%d %d\n",ans1-k+1,ans2-k+1);
            
    }
    return 0;
}