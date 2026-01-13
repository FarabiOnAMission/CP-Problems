#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long long sum=0;
    cin>>n;
    long long ts=(n*(n+1))/2;
    long long k;
    for(int i=0;i<n-1;i++)
    {
        cin>>k;
        sum+=k;

    }

    cout<<ts-sum<<endl;

}
