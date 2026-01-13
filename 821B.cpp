#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  m,b;
    cin>>m>>b;

    long long x=ceil(b*m)/2;
    long long y=floor(b/2);
    long long sum=0;


    for(long long i=0;i<=x;i++)
    {
        for(long long j=0;j<=y;j++)
            {
                sum+=x+y;
            }
    }

    cout<<sum<<endl;

}
