#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,i,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<=n/2)
        {
            i=2*k-1;
        }
        else
            i=2*k-n;
    }

    else
    {
        long long div= ((n+1)/2);
        if(k<=div)
        {
            i=2*k-1;
        }
        else
            i=2*k-n-1;
    }

    cout<<i<<endl;
}
