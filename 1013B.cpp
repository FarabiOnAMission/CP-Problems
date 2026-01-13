#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    unordered_set<ll>u1;
    unordered_set<ll>u2;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        u1.insert(v[i]);
    }

    if(u1.size()<n)
    {
      cout<<0<<endl;
      return 0;
    }
    else
    {
        for(ll i=0;i<n;i++)
        {
            ll g=v[i]&x;
            if(g!=v[i] && u1.count(g))
            {
                cout<<1<<endl;
                return 0;
            }
        }

        for(ll i=0;i<n;i++)
        {

            v[i]=v[i]&x;
            if(u2.count(v[i]))
            {
                cout<<2<<endl;
                return 0;
            }
            u2.insert(v[i]);
        }

        cout<<-1<<endl;
    }
}
