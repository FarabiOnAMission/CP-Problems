#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
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
    }

    long long ans=0;
    for(long long i=1;i<=n;i++)
    {
        long long c=((psum[i]%n)+n)%n;
        ans+=ump[c];
        ump[c]++;
    }

    cout<<ans<<endl;
}

