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
        vector<long long>a(n);
        vector<long long>b(n);
        long long c=0;
        long long ans;
        int w=0;

        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>b[i];
        }


        for(long long i=0;i<n;i++)
        {
            if(b[i]==-1)
            {
                c++;
            }
        }


        if(c==n)
        {
            sort(a.begin(),a.end());
            ans=(a[0]+k)-(a[n-1]+0)+1;
            cout<<ans<<endl;
        }
        else
        {
            long long sum=-1;
            for(long long i=0;i<n;i++)
            {
                if(b[i]!=-1)
                {
                    long long l=a[i]+b[i];

                    if(sum==-1)
                    {
                        sum=l;
                    }
                    else
                    {
                        if(l!=sum)
                    {   w=1;
                        cout<<0<<endl;
                        break;
                    }
                        }
                }
            }
            if(w!=1)
            {
            sort(a.begin(),a.end());
            if(sum>=a[n-1] &&  sum-a[0]<=k)
            {
                cout<<1<<endl;
            }
            else
                cout<<0<<endl;
        }
        }

    }
}
