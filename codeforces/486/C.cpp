//supremelord
#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=100050;
int n,p,ans=0;
char s[maxn];
int dif[maxn];
int main(){
    int i,j,l,r;
    scanf("%d%d%s",&n,&p,s+1);
    if(p>=n/2) p=n-p+1;
    for(i=1;i<=n/2;i++)
        ans+=dif[i]=min(abs(s[n-i+1]-s[i]),26-abs(s[n-i+1]-s[i]));
    for(l=1;l<=n/2&&!dif[l];l++);
    for(r=n/2;r&&!dif[r];r--);
    if(l<=r)
    {
        if(p<=l) ans+=r-p;
        else if(p>=r) ans+=p-l;
        else ans+=min(p-l,r-p)+(r-l);
    }
    printf("%d\n",ans);
    return 0;
}