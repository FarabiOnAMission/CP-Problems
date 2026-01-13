#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>v(n+1,0);
    for(long long i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    vector<long long>c=v;
    sort(v.begin(),v.end());
    long long ans1=v[(n/2)+1];
    long long ans2=v[n/2];

    for(long long i=1;i<=n;i++)
    {
        if(c[i]<ans1)
        {
            cout<<ans1<<endl;
        }
        else
            cout<<ans2<<endl;
    }
}
