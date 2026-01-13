#include<bits/stdc++.h>

using namespace std;

int main()
{
     long long t;
     cin>>t;
     while(t--)
     {
        long long n,q,x;

        cin>>n>>q;
        vector<long long>arr(n);
        vector<long long> prefix(n+1,0);

        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
            prefix[i+1]=arr[i]+prefix[i];
        }

        while(q--)
        {
            long long l,r,k;
            cin>>l>>r>>k;
            long long ts=prefix[n];
            long long ss=prefix[r]-prefix[l-1];
            long long nss=(r-l+1)*k;

            long long s= ts-ss+nss;

            if(s%2==1)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;


        }



    }
}
