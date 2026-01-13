#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    unordered_map<ll,ll>us;
    for(ll i=0;i<n;i++) cin>>v[i];

    ll l=0,r=0;
    ll ans=0;
    for(r=0;r<n;r++)
    {
        us[v[r]]++;

        while(us.size()>s)
        {
            us[v[l]]--;
            if(us[v[l]]==0)
                us.erase(v[l]);

            l++;
        }

        ans+=(r-l+1);
    }


    cout<<ans<<endl;
}
