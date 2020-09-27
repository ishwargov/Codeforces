#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=0;
        bool turn=true;
        while(n>0)
        {
            if(n==4)
            {
                if(turn==true)
                {
                    ans+=3;
                    n=0;
                    turn=false;
                }
                else
                {
                    ans+=1;
                    n=0;
                    turn=true;
                }
            }
            else
            {
                if(n%2==0)
                {
                    if((n/2)%2==1)
                    {
                        n=n/2;
                        if(turn==true)
                        {
                            ans+=n;
                            turn=false;
                        }
                        else
                        turn=true;
                    }
                    else
                    {
                        n=n-1;
                        if(turn==true)
                        {
                            ans+=1;
                            turn=false;
                        }
                        else
                        turn=true;
                    }
                }
                else
                {
                    n=n-1;
                    if(turn==true)
                    {
                        ans+=1;
                        turn=false;
                    }
                    else
                    turn=true;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}