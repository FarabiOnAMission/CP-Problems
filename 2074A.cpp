#include<bits/stdc++.h>

using namespace std;

using ll=long long;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,d,u;
        cin>>l>>r>>d>>u;
        set<ll>ms;
        ms.insert(l);
        ms.insert(r);
        ms.insert(d);
        ms.insert(u);


        if(ms.size()==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }
}
