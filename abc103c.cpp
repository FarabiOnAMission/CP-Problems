#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }

    long long s=0;
    for(long long i=0;i<n;i++)
    {
        s=s+a[i]-1;
    }

    cout<<s<<endl;
}
