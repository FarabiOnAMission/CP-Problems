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
    vector<int> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int l=10/k;
    int m=INT_MAX;
    int r,c=0;
        for(long long i=0;i<n;i++)
        {
        if(arr[i]%k==0)
        {
            m=0;
            break;
        }

        else
        {
            r=k-(arr[i]%k);
        }

        m=min(m,r);
        }

        if(k==4)
        {   for(long long i=0;i<n;i++)
        {

            if(arr[i]%2==0)
            {
                c++;
            }
        }

        if(c>=2)
        {
            m=0;
        }
        else if(c==1)
        {
            m=min(m,1);
        }
        else
        {
            m=min(m,2);
        }

        }

        cout<<m<<endl;
    }
}
