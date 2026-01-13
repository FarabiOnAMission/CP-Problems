#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n,k;

    cin>>n>>k;
    int m=0;

    if(n==k || k==0)
    {
        m=0;
    }
    else
        m=1;


    cout<<m<<" "<<min(2*k,n-k)<<endl;


}
