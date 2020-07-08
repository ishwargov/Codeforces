#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,s=0,m=0,a[101],ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==-1){
			m++;
		}
		if(a[i]==0){
			ans++;
			a[i]++;
		}
		s+=a[i];
	}
	if(s!=0){
		cout<<ans;
		return;
	}
	else{
		if(m==n)
			cout<<ans+2;
		else
			cout<<ans+1;
	}
}	

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		solve();
		cout<<"\n";
	}
	return 0;
}				