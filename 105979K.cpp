#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    vector<long long>r(n);
    vector<long long>l(n);

    for(long long i=0;i<n;i++)
    {
        cin>>r[i];
    }

    for(long long i=0;i<n;i++)
    {
        cin>>l[i];
    }


    sort(r.begin(),r.end());
    sort(l.begin(),l.end());
    long long ans=0;

    for(long long i=0;i<n;i++)
    {
        long long c=r[i]+l[i];
        if(c>k)
        {
            break;
        }
        else
        {
            k-=c;
            ans++;
        }
    }

    cout<<ans<<endl;
}
