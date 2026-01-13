#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll b,g;
    cin>>b;
    vector<ll>vb(b);

    unordered_map<ll,ll>ump1;
    for(ll i=0;i<b;i++)
    {
        cin>>vb[i];
    }

    cin>>g;
    for(ll i=0;i<g;i++)
    {
        ll x;
        cin>>x;
        ump1[x]++;
    }

    ll p=0;
    sort(vb.begin(),vb.end());
    for(ll i=0;i<b;i++)
    {
        ll k1=vb[i]+1;
        ll k2=vb[i]-1;
        if(ump1[k2]>0)
        {
            p++;
            ump1[k2]--;
        }
        else if(ump1[vb[i]]>0)
        {
            p++;
            ump1[vb[i]]--;
        }
        else if(ump1[k1]>0)
        {
            p++;
            ump1[k1]--;
        }
    }

    cout<<p<<endl;

}
