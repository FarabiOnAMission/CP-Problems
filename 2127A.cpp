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
        set<ll>s;
        vector<ll>v(n);
        ll c0=0;
        ll c1=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];

        }

        for(ll i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                c0++;
            }

            else if(v[i]==-1)
            {
                c1++;
            }

            s.insert(v[i]);
        }

        if(c0>0)
            cout<<"NO"<<endl;
        else
        {
        if(s.size()==1)
            cout<<"YES"<<endl;
        else
        {
            if(s.size()==2 && c1>0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

        }
        }

    }

}
