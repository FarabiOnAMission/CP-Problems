#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;

    while(t--)
    {
    long long n;
    cin>>n;
    long long pow2=0,pow3=0;


    while(n%2==0)
    {
        n/=2;
        pow2++;
    }
    while(n%3==0)
    {
        n/=3;
        pow3++;
    }

    if(n>1 || pow2>pow3)
    {
        cout<<"-1"<<endl;
    }
    else
        cout<<(pow3-pow2)+pow3<<endl;

    }

    return 0;

}
