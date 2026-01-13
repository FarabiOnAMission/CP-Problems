#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    bitset<1005>b[10000];
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll c;
        cin>>c;
        while(c--)
        {
            ll x;
            cin>>x;
            b[x][i]=1;
        }
    }

    ll q;
    cin>>q;
    for(ll i=0;i<q;i++)
    {
        ll l,r;
        cin>>l>>r;
        if((b[l] & b[r]).any())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

}
