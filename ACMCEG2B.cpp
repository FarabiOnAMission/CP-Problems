#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    map<pair<long long,long long>,string>mp;
    while(t--)
    {
        long long a,b;
        string s;
        cin>>a>>b>>s;
        mp[{a,b}]=s;
    }
    long long q;
    cin>>q;
    while(q--)
    {
        long long x,y;
        cin>>x>>y;
        cout<<mp[{x,y}]<<endl;
    }


}
