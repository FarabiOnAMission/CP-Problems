#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        long long n;
        cin>>n;
            long long a=1;
            long long m2=LLONG_MAX;
            long long j=0;
            long long ba=1;long long bb=n;
            for(long long i=1;i*i<=n;i++)
            {
                if(n%i==0)
                {
                    a=i;
                    j=n/i;

                if(gcd(a,j)==1)
                {
                    if(max(a,j)<max(ba,bb))
                        {
                            ba=a;
                            bb=j;
                        }

                }
                }


            }

            cout<<ba<<" "<<bb<<endl;
}
