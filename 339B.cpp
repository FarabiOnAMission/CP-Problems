#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long> a;
    long long x;

    for(long long i=0;i<m;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    long long moves=a[0]-1;

    for(long long i=1;i<a.size();i++)
    {
        if(a[i]<a[i-1])
        {
            moves+=((n-a[i-1])+a[i]);
        }
        else if(a[i]>a[i-1])
        {
            moves+=(a[i]-a[i-1]);
        }
    }

        cout<<moves<<endl;

}
