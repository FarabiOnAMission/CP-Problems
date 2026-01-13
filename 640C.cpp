#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
    long long n,k;
    cin>>n>>k;
    long long v=(k-1)/(n-1);
    cout<<v + k<<endl;
    }
}
