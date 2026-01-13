#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n,s[2000055];

bool valid()
{
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            for(ll k=j+1;k<n;k++)
            {
                if(s[j]-s[i]==s[k]-s[j])
                    return false;
            }
        }

    return true;
    }
}

int main()
{
    cin>>n;

    for(ll i=0;i<n;i++)
        s[i]=i+1;

    do{
        if(valid())
        {
            for(ll i=0;i<n;i++)
                cout<<s[i]<<' ';

            cout<<endl;
        }
    }while(next_permutation(s,s+n));

    return 0;

}
