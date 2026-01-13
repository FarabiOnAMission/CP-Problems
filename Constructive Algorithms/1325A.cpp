#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;

    if(n%2==0)
        cout<<n/2<<' '<<n/2<<endl;
    else
        cout<<n-1<<' '<<1<<endl;

    }
}

