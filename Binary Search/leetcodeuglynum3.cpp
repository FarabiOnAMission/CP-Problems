#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll lcm(ll x, ll y)
{
    return x / __gcd(x, y) * y;
}

int main()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;

    ll l=1,r=2e18;
    ll ans=0;
    while(l<=r)
    {
        ll m=l+(r-l)/2;
        ll ab = lcm(a, b);
        ll ac = lcm(a, c);
        ll bc = lcm(b, c);
        ll abc = lcm(a, bc);

        ll cnt = m/a + m/b + m/c
               - m/ab - m/ac - m/bc
               + m/abc;

        if(cnt>=n)
            {
                ans=m;
                r=m-1;
            }
        else
            {
                l=m+1;
            }

    }

    cout<<ans<<endl;
}
