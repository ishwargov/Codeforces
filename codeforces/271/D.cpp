#include <bits/stdc++.h>
using namespace std;
 
char s[10000],alph[1000];
int trie[1500*1500][26],n,sz,k,tt,nu,i,j;
 
int main(){
	gets(s);n=strlen(s);
	gets(alph);
	scanf("%d",&k);
	sz=1;
	for(i=0;i<n;i++){
		tt=0;nu=1;
		for(j=i;j<n;j++){
			tt+=(alph[s[j]-'a']-'0') ^ 1;
			if(tt>k)break;
			if(!trie[nu][s[j]-'a']){
				++sz;
				trie[nu][s[j]-'a']=sz;
				nu=sz;
			}else nu=trie[nu][s[j]-'a'];
		}
	}
	printf("%d\n",sz-1);
	return 0;
}