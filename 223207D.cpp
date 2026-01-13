#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,b,d;
    cin>>n>>b>>d;
    ll s=0;
    ll c=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x<=b)
            s+=x;

        if(s>d){
           c++;
           s=0;
        }
    }

    cout<<c<<endl;

}
