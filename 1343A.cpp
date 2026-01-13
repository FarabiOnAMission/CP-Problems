#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n;
    long double x;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(int k=2;;k++)
        {
        x=(n/(pow(2,k)-1));

        if(floor(x)==x)
        {
            break;
        }
        }

        long long i= (long long)x;

        cout<<i<<endl;
    }
}
