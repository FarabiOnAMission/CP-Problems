#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>mp;
    long long q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        if(n==1)
        {
            string x;
            long long y;
            cin>>x>>y;
            mp[x]+=y;
        }
        else if(n==2)
        {
            string x;
            cin>>x;
            mp.erase(x);

        }
        else
        {
            string x;
            cin>>x;
            cout<<mp[x]<<endl;
        }
        }
}
