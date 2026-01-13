#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        char x;
        cin>>n>>x;
        string s;
        cin>>s;

        if(x=='g'){
            cout<<0<<endl;
            continue;
        }

        string check=s+s;
        vector<ll>nxtg(2*n+1,0);

        for(ll i=2*n-1;i>=0;i--){
            if(check[i]=='g'){
                nxtg[i]=i;
            }
            else
                nxtg[i]=nxtg[i+1];
        }

        ll ans=0;
        for(ll i=0;i<2*n;i++){
            if(check[i]==x)
                ans=max(ans,nxtg[i]-i);
        }

        cout<<ans<<endl;

    }
}
