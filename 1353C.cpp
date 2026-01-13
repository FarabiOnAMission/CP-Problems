#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin>>n;
    long long j=8;
    long long i=1;
    long long ts=0;
    for(long long i=1;i<=((n-1)/2);i++)
    {
        ts+=j*i*i;

    }

    cout<<ts<<endl;
}
}
