#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int big=0,small=0,s=0;
        if((a+b)%2==0)
            s=1;
        else s=-1;
        if(a>0||d>0)
            big=1;
        if(b>0||c>0)
            small=1;
        if(big==1&&s==-1)
            cout<<"Ya ";
        else cout<<"Tidak ";
        if(small==1&&s==-1)
            cout<<"Ya ";
        else cout<<"Tidak ";
        if(small==1&&s==1)
            cout<<"Ya ";
        else cout<<"Tidak ";
        if(big==1&&s==1)
            cout<<"Ya"<<endl;
        else cout<<"Tidak"<<endl;
        
    }
    return 0;
}