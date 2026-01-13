#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>b(n),g(m);
    for(auto &x:b) cin>>x;
    for(auto &x:g) cin>>x;

    sort(b.begin(),b.end());
    sort(g.begin(),g.end());

    if(b[n-1]>g[0]){
        cout<<-1<<endl;
        return 0;
    }

    ll s=accumulate(b.begin(),b.end(),0LL)*m;

    for(ll i=0;i<m;i++){
        s+=g[i]-b[n-1];
    }

    if(g[0]>b[n-1]){
        s+=b[n-1]-g[0];
        s+=g[0]-b[n-2];
    }

    cout<<s<<endl;
}
