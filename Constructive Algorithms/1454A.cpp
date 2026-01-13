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

    if(n%2==0){
        for(ll i=n;i>=1;i--)
            cout<<i<<' ';

        }
    else{
        for(ll i=n;i>=1;i--){
        if(i==(n+1)/2){
                cout<<i-1<<' ';
                cout<<i<<' ';
                i--;
                continue;
            }
            cout<<i<<' ';

        }
    }

    cout<<endl;

    }
}
