#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    string s;
    cin>>n;
    cin>>s;
    unordered_set<char>us;
    for(ll i=0;i<n;i++)
    {
        us.insert(s[i]);
    }

    unordered_map<char,ll>ump;

    ll l=0;
    ll m=us.size();
    ll c=LLONG_MAX;

    for(ll r=0;r<s.size();r++)
    {
        ump[s[r]]++;

        while(ump.size()==m)
        {
            c=min(c,r-l+1);
            ump[s[l]]--;
            l++;
        }

    }



    cout<<c<<endl;
}
