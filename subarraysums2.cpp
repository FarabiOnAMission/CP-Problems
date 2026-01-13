#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long>v(n);
    vector<long long>psum(n+1,0);
    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
    }

    unordered_map<long long,long long>ump;
    ump[0]=1;
    for(long long i=1;i<=n;i++)
    {
        psum[i]=psum[i-1]+v[i-1];
        ump[psum[i]]=i;;
    }

    long long ans=0;
    for(long long i=1;i<=n;i++)
    {
        long long c=psum[i]-x;
        if(ump.count(c)!=0)
        {
            if(ump[c]<i)
                ans++;
        }
    }

    cout<<ans<<endl;
}
