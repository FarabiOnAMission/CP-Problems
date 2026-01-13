#include<bits/stdc++.h>

using namespace std;

int main()
{
    const long long N = 1e6 + 9;
    vector<long long> div(N,0);  

        for(long long i=1;i<N;i++)
        {
            for(long long j=0;j<N;j+=i)
                div[j]++;
        }

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<div[n]<<endl;
    }
    


}
