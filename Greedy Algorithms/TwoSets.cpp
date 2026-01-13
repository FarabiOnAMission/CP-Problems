#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;

    ll sum=n*(n+1)/2;
    if(sum%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        ll s=sum/2;
        set<ll>c;
        ll i=n;
        while(s>0)
        {
            if(s-i>=0)
            {
                s-=i;
                c.insert(i);
            }
            i--;
        }
        cout<<"YES"<<endl;
        cout<<c.size()<<endl;
        for(auto &x:c)
        {
            cout<<x<<' ';
        }
        cout<<endl;

        cout<<n-c.size()<<endl;

        for(ll j=n;j>=1;j--)
        {
            if(!c.count(j))
                cout<<j<<' ';
        }

    }
}
