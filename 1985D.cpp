#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;

        cin>>n>>m;
        char c;
        int mir=n;
        int mar=-1;
        int mic=m;
        int mac=-1;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
               cin>>c;
               if(c=='#')
               {
                   mir=min(mir,i);
                   mar=max(mar,i);
                   mic=min(mic,j);
                   mac=max(mac,j);
               }
            }
        }
        int h=(mir+((mar-mir)/2));
        int k=(mic+((mac-mic)/2));

        cout<<h<<" "<<k<<endl;

    }

}
