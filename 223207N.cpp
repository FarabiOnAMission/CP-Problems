#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll arr[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)
            cin>>arr[i][j];
    }

    ll arrR[n];
    for(ll i=1;i<=n;i++)
        arrR[i]=i;

    ll arrC[m];
    for(ll j=1;j<=m;j++)
        arrC[j]=j;

    while(k--){

        char s;
        ll x,y;
        cin>>s>>x>>y;
        if(s=='g'){
            cout<<arr[arrR[x]-1][arrC[y]-1]<<"\n";
        }
        else if(s=='r'){
            swap(arrR[x],arrR[y]);
        }
        else
            swap(arrC[x],arrC[y]);
    }
}
