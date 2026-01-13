#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        vector<long long> p(N+1,0);
        vector<long long>c(N+1,0);

        for(long long i=0;i<N;i++)
        {
            long long x;
            cin>>x;

            if(x<=N)
                p[x]++;
        }

        for(long long i=1;i<=N;i++)
        {
            for(long long j=i;j<=N;j+=i)
            {
                c[j]+=p[i];
            }
        }

        sort(c.begin(),c.end());
        cout<<c[N]<<endl;
    }

}
