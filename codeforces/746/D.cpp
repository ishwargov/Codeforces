#include <iostream>
using namespace std;
#define s string
int main(){
int n,k,a,b,z,i;
cin>>n>>k>>a>>b;
s r = "";
char x='G',y='B';
if(a<b)
	swap(a,b),swap(x,y);
z=(a-1)/k+1;
if(z>b+1)
	return cout<<"NO", 0;
for(i=0;i<z-1;i++)
	r+=s(k,x)+s(b/z+(i<b%z?1:0),y);
r+=s(a-k*(z-1),x)+s(b/z,y);
cout<<r;
}