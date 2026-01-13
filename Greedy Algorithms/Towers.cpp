#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }

    multiset<ll>s;

    for(ll i=0;i<n;i++)
    {
        auto it=s.upper_bound(v[i]);

        if(it==s.end())
        {
            s.insert(v[i]);
        }
        else
        {
            s.erase(it);
            s.insert(v[i]);
        }

    }

    cout<<s.size()<<endl;
}
