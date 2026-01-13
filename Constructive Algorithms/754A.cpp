#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }
    if(s!=0){
        cout<<"YES"<<endl;
        cout<<1<<endl;
        cout<<1<<' '<<n<<endl;
        return 0;
    }
    else{
        for(ll i=0;i<n;i++)
        {
            s+=v[i];
            if(s!=0){
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<1<<' '<<i+1<<endl;
                cout<<i+2<<' '<<n<<endl;
                return 0;
            }

        }
    }

    cout<<"NO"<<endl;
}
