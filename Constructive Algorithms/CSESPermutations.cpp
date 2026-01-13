#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;
    if(n<=3 && n!=1)
        cout<<"NO SOLUTION";
    else{
        for(ll i=2;i<=n;i+=2)
            cout<<i<<' ';
        for(ll i=1;i<=n;i+=2)
            cout<<i<<' ';
    }

    cout<<endl;

}
