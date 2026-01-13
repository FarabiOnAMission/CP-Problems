#include<bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,j,k;
        cin>>n>>j>>k;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(k>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            long long cmp=v[j-1];
            sort(v.begin(),v.end());
            if(cmp==v[n-1])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }

}
