#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>v(n);
    unordered_map<long long,long long>ump;

    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
        ump[v[i]]++;
    }

    long long ans=INT_MIN;
    for(long long i=0;i<n;i++)
    {
        ans=max(ans,ump[v[i]]);
    }

    cout<<ans<<endl;



}
