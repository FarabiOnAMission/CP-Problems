#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int m=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if((i&j)<k)
                {
                    m=max(m,(i&j));
                }
            }
        }

        cout<<m<<endl;
    }

}