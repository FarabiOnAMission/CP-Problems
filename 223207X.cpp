#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

    ll n,k;
    cin>>n>>k;
    vector<ll>v(2*n+2);
    for(ll i=1;i<=2*n+1;i++)
        cin>>v[i];

    ll c=0;
   for (ll i = 2; i <= 2*n && c < k; i += 2) {
    if (v[i]-1>v[i-1] && v[i]-1>v[i+1]) {
        v[i]--;
        c++;
    }
}

    for(ll i=1;i<=2*n+1;i++)
        cout<<v[i]<<' ';

    cout<<endl;



}
