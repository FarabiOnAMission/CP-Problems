#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,t;
    cin>>n>>t;
    map<string,long long>mp;
    while(n--)
    {
        string x;
        long long a;
        cin>>x>>a;
        mp[x]=a;
    }

    long long i=0;
    long long sum=0;
    while(true)
    {
        if(i>=t)
            break;

        string s;
        cin>>s;
        sum+=mp[s];

        if(s==".")
        {
            cout<<sum<<endl;
            i++;
            sum=0;
        }

    }

}
