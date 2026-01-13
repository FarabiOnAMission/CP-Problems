#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    int sum=0;

    cin>>n>>m;
    sum=n;
    for(int i=1;i<=n;i++)
    {
        if(i%m==0)
        {
            sum++;
        }
    }

    for(int i=n+1;i<=sum;i++)
    {
        if(i%m==0)
        {
            sum++;
        }
    }



    cout<<sum<<endl;
}
