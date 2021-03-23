#include <stdio.h>
#include <algorithm>
#include <vector>
#define INF 1000000000
 
using namespace std;
 
vector<int> v[3];
 
int main()
{
    int n,sum,i,a,b,sz1,sz2,j,k,tot,ans;
    scanf("%d",&n);
    sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        sum+=b;
    }
    sort(v[1].begin(),v[1].end());
    sort(v[2].begin(),v[2].end());
    sz1=v[1].size();
    sz2=v[2].size();
    ans=INF;
    for (i=0;i<=sz1;i++)
    {
        for (j=0;j<=sz2;j++)
        {
            tot=sum;
            for (k=sz1-1;k>sz1-1-i;k--) tot-=v[1][k];
            for (k=sz2-1;k>sz2-1-j;k--) tot-=v[2][k];
            if (tot<=i+j*2) ans=min(ans,i+j*2);
        }
    }
    printf("%d\n",ans);
    return 0;
}