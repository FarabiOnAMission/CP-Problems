#include <bits/stdc++.h>
using namespace std;
using ll=long long;

string sin(ll k) {
    string s="sin("+ to_string(k) + ")";
    for (ll j=k-1;j>=1;--j){
    s="sin(" + to_string(j) +(j %2?"-":"+")+s +")";
    }
    return s;
}

int main() {
    ll n;
    cin>>n;

    vector<string> v(n+1);
    for (ll i=1;i<=n;++i) v[i] = sin(i);

    string ans= v[1] + "+" + to_string(n);
    for (ll i=2;i<=n;++i) {
        ans= "(" + ans + ")" + v[i] + "+" + to_string(n-i+1);
    }

    cout<<ans<<endl;
}