#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n;
map<ll,ll>prev_val;
ll query(ll x)
{
    if(prev_val.count(x))
        return prev_val[x];

    if(x ==0 || x==n+1)
        return LLONG_MAX;

    cout<<"? "<<x<<endl;
    ll value;
    cin>>value;
    return prev_val[x]=value;

}

int main()
{
    cin>>n;
    ll l=0,r=n+1;
    while(r-l>1)
    {
        ll m=l+(r-l)/2;
        if(query(m-1)>query(m))
        {
            l=m;
        }
        else
            r=m;
    }

    cout<<"! "<<l<<endl;
}
