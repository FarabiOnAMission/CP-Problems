#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
    ll n,k,m;
    cin>>n>>k>>m;
    string s;
    cin>>s;
    set<char>c;
    string ans;

    for(ll i=0;i<m;i++)
    {
        c.insert(s[i]);

        if(c.size()==k)
        {
            ans+=s[i];
            c.clear();
        }
    }

    if(ans.size()>=n)
        cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
        char missing;
        for(ll i=0;i<k;i++)
        {
            char ch=char('a'+i);
            if(!c.count(ch))
            {
                missing=ch;
                break;
            }
        }

        while(ans.size()<n) ans+=missing;

        cout<<ans<<endl;
    }

    }
}
