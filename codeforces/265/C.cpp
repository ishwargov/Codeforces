#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <climits>
#define LL long long
const double pi=acos(-1.0),e=exp(1.0);
using namespace std;

struct node{
    int x;
    node *pre,*next;
};
char s[1100000];

node *NEW(){
    node *p=new node;
    memset(p,0,sizeof(node));
    return p;
}

int main(){
    node *a=NEW(),*p=NEW(),*q=NEW();
    p->x=1;
    a->next=p; p->pre=a;
    p->next=q; q->pre=p;
    scanf("%s",s);
    node *now=p;
    int i;
    for (i=0;s[i+1];i++){
        p=NEW(); p->x=i+2;
        if (s[i]=='l'){
            now->pre->next=p; p->pre=now->pre; p->next=now; now->pre=p;
        }else{
            now->next->pre=p; p->next=now->next; p->pre=now; now->next=p;
        }
        now=p;
    }
    p=a;
    while (p){
        if (p->x) printf("%d\n",p->x);
        p=p->next;
    }
}
