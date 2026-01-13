#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool isprime(ll n){

    if(n<2)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0)
        return false;
    for(ll i=3;i*i<=n;i+=2)
        if(n%i==0) return false;

    return true;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        ll r=sqrt(x);
        if(r*r==x && isprime(r))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
