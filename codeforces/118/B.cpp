/* XxSupremeLordxX Ishwar Govind */
#include <bits/stdc++.h>
using namespace std;
#define li       	long long int
#define rep(i,to)	for(li i=0;i<((li)(to));++i)
#define pb       	push_back
#define sz(v)    	((li)(v).size())
#define bit(n)   	(1ll<<(li)(n))
int main(){
	li n;
	cin>>n;
	rep(i,n*2+1){
		for(li pos=0;;pos++){
			li num=abs(i-n)+abs(pos-n);
			if(num<=n) cout<<string(1,'0'+n-num);
			else cout<<" ";
			if(n<(pos+1) && n<num+1) break;
			cout<<" ";
		}
		cout<<endl;
	}
}