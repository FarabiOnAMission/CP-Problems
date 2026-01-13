#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    unordered_set<long long>k;

    for(long long j=2;j*j<=n;j++)
    {
        long long val=j*j;
        while(val<=n)
        {
            k.insert(val);
            if(val>n/j)
                break;

            val*=j;
        }
    }

    cout<<n-k.size()<<endl;

}
