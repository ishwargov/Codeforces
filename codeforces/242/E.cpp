#pragma comment(linker, "/stack:200000000")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("Ofast") 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    ll n;
    cin >> n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)cin >> a[i];
    ll q;
    cin >> q;
    while(q--)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        if(t == 1)
        {
            ll sum = 0;
            for(ll i=l;i<=r;i++)sum+=a[i];
            cout << sum << '\n';
        } else
        {
            ll x;
            cin >> x;
            for(ll i=l;i<=r;i++)a[i]^=x;
        }
    }
}