#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];

    cout<<abs(v[0]-v[1])<<' '<<abs(v[0]-v[n-1])<<endl;
    for(ll i=1;i<n-1;i++)
    {
        ll dmin=min(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
        ll dmax=max(abs(v[i]-v[0]),abs(v[i]-v[n-1]));

        cout<<dmin<<' '<<dmax<<endl;
    }
    cout<<abs(v[n-1]-v[n-2])<<' '<<abs(v[n-1]-v[0])<<endl;

}
