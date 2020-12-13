#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#define REP(i,n) for (int i=1;i<=n;++i)
using namespace std;
 
const int maxn=100010;
int n;
double ans,a[maxn];
 
int main() {
	scanf("%d",&n);
	REP(i,n) {
		double x,y;
		scanf("%lf%lf",&x,&y);
		a[i]=atan2(y,x)/acos(-1.0)*180.0;
		if (a[i]<0.0) a[i]+=360.0;
	}
	sort(a+1,a+n+1);
	REP(i,n-1) ans=max(ans,a[i+1]-a[i]);
	ans=max(ans,360.0-a[n]+a[1]);
	printf("%.20lf\n",360.0-ans);
	return 0;
}