#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int* a=(int*)malloc(sizeof(int)*n);
    int* x=(int*)malloc(sizeof(int)*n);
    cout<<"? 1 2"<<endl;
    cin>>a[1];
    cout<<"? 2 3"<<endl;
    cin>>a[2];
    cout<<"? 1 3"<<endl;
    cin>>a[0];
    a[0]=2*a[0]-a[1]-a[2];

    x[0]=(a[0]+a[1]-a[2])/2;
    for(int i=3;i<n;i++){
        cout<<"? "<<i<<" "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"! "<<x[0]<<" ";
    for(int i=1;i<n;i++){
        x[i]=a[i]-x[i-1];
        cout<<x[i]<<" ";
    }
    cout<<endl;
    return 0;
}