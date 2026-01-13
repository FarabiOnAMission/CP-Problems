#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<pair<ll,ll>>a(n);
        vector<ll>b(n);

        for(ll i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        for(ll i=0;i<n;i++) cin>>b[i];

        vector<pair<ll,ll>>aid=a;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<ll>c(n);

        for(ll i=0;i<x;i++)
        {
            c[a[n-x+i].second]=b[i];
        }

        for(ll i=x;i<n;i++)
        {
            c[a[i-x].second]=b[i];
        }

        for(ll i=0;i<n;i++)
        {
            if(aid[i].first>c[i])
                x--;
        }

        if(x==0)
        {
            cout<<"YES"<<endl;

            for(auto &y:c)
                cout<<y<<' ';

            cout<<endl;

        }
        else
            cout<<"NO"<<endl;

    }
}
