#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<long long>x(n);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    vector<long long>p1(n+1,0);
    vector<long long>p2(n+1,0);

    for(int i=1;i<=n;i++)
    {
        p1[i]=p1[i-1]+x[i-1];
    }

    sort(x.begin(),x.end());

    for(int i=1;i<=n;i++)
    {
        p2[i]=p2[i-1]+x[i-1];
    }

    long long q;
    cin>>q;
    while(q--)
    {
        int t,l,r;
        cin>>t>>l>>r;
        if(t==1)
        {
            cout<<p1[r]-p1[l-1]<<endl;
        }
        else
        {
            cout<<p2[r]-p2[l-1]<<endl;
        }
    }

}
