#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    ll a,b,c;
    cin>>a>>b>>c;
    ll n;
    cin>>n;
    vector<ll>usb;
    vector<ll>ps2;
    vector<ll>rem;
    ll ans=0;
    ll pc=0;
    while(n--)
    {
        string s;
        ll x;
        cin>>x>>s;

        if(s=="USB")
        {
            usb.push_back(x);
        }
        else
            ps2.push_back(x);
    }

    sort(usb.begin(),usb.end());
    sort(ps2.begin(),ps2.end());

    ll usb_i=0;
    while(a>0 && usb_i<usb.size())
    {
        ans+=usb[usb_i];
        pc++;
        a--;
        usb_i++;
    }

    ll ps2_i=0;
    while(b>0 && ps2_i<ps2.size())
    {
        ans+=ps2[ps2_i];
        pc++;
        b--;
        ps2_i++;
    }

    for(ll i=usb_i;i<usb.size();i++)
    {
        rem.push_back(usb[i]);
    }

    for(ll i=ps2_i;i<ps2.size();i++)
    {
        rem.push_back(ps2[i]);
    }

    sort(rem.begin(),rem.end());

    ll rem_i=0;
    while(c>0 && rem_i<rem.size())
    {
        ans+=rem[rem_i];
        pc++;
        c--;
        rem_i++;
    }

    cout<<pc<<' '<<ans<<endl;

}
