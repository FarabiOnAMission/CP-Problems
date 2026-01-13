#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>x(n,0);
    vector<int>prefix_sum(n+1,0);

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    for(int i=1;i<=n;i++)
    {
        prefix_sum[i]=prefix_sum[i-1]+x[i-1];
    }

    int ans=0;
    int ch=INT_MAX;
    for(int i=0;i<=n-k;i++)
    {
        int temp=prefix_sum[i+k]-prefix_sum[i];
        if(temp<ch)
        {
            ch=temp;
            ans=i;
        }
    }

    cout<<ans+1<<endl;


}
