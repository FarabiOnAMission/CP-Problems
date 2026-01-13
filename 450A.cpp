#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a;
    vector<int>s(n+1,0);
    vector<int>k(n+1,0);
    for(int i=1;i<=n;i++)
    {
            cin>>s[i];

    }

    for(int i=1;i<=n;i++)
    {
        int r=ceil((s[i]+m-1)  /m);
        k[i]=r;
    }
    int maxv=0;
    for(int i=1;i<=n;i++)
    {

        if(k[i]>=maxv)
        {
            maxv=k[i];
            a=i;
        }
    }

    cout<<a<<endl;



}
