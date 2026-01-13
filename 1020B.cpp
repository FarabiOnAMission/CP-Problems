#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll traverse(vector<ll>&v,ll x,set<ll>&s) {
    if (s.count(x)) {
        return x;
    }
    s.insert(x);
    return traverse(v,v[x-1],s);
}

int main() {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
    }

    for (ll i=0;i<n;i++) {
        set<ll>s;
        cout<<traverse(v,i+1,s)<<" ";
    }
    cout<<endl;
} 