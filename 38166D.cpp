#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    map<string,long long>mp;
    while(n--)
    {
        string s;
        long long x;
        cin>>s>>x;
        mp[s]=x;
    }

    while(q--)
    {
        long long a,b;
        string s;
        cin>>a>>s;
        if(a==1)
        {
            cin>>b;
            mp[s]+=b;
        }
        else
        {
            cout<<mp[s]<<endl;
        }
    }
}
