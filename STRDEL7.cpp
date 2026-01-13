#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long l=0,r=0;
        long long ans=n;
        bool f=false;
        for(long long i=1;i<n;i++)
        {
            if(f)
            {
                if(s[i]!=s[i-1])
                {
                    r=i;
                    ans=ans-(r-l);
                    f=false;
                }

            }
            else
            {
                if(s[i]!=s[i-1])
                {
                    l=i-1;
                    f=true;
                }
            }
        }
        cout<<ans<<endl;
    }
}
