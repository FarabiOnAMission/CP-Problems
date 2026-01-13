#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>s(n);
    for(long long i=0;i<n;i++)
    {
        cin>>s[i];
    }
    long long ans=gcd(s[0],s[1]);

    for(long long i=2;i<n;i++)
    {
        long long m=min(ans,s[i]);
        ans=gcd(m,s[i]%m);
    }

    cout<<ans<<endl;

}