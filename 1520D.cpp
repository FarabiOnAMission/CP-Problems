#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        unordered_map<ll,ll>ump;
        unordered_set<ll>us;
        vector<ll>tr;
        for(ll i=0;i<n;i++)
            cin>>v[i];

        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll k=v[i]-(i+1);
            ump[k]++;
            if(!us.count(k))
                tr.push_back(k);

            us.insert(k);
        }

        for(ll i=0;i<tr.size();i++)
        {
            if(ump[tr[i]]>1)
            {
                ll g=ump[tr[i]];
                ans+=(g*(g-1))/2;
            }
        }

        cout<<ans<<endl;

    }
}
