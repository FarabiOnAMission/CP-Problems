#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long>v(n);
        long long sum=0;
        for (long long i=0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        if (sum%x!=0)
        {
            cout<<n<<endl;
            continue;
        }

        long long left = -1;
        long long right = -1;
        for (long long i = 0; i < n; i++)
        {
            if (v[i] % x != 0)
            {
                if (left == -1)
                    left = i;
                right = i;
            }
        }

        if (left == -1)
            cout<<-1<< endl;
        else
            cout<<n-min(left+1,n-right)<< endl;
    }
}
