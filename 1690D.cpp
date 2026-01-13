#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long m=n;


        for(int i=0;i<n;i++)
        {   long long c=0;
            if(i+k>n)
            {
                break;
            }
            for(int j=i;j<i+k;j++)
            {
                if(s[j]=='W')
                {
                    c++;
                }
            }
            m=min(m,c);

        }

        cout<<m<<endl;

    }
}
