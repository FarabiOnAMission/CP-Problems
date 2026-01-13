#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;

    if(n==0)
    {
        cout<<1<<endl;
    }

    else if(n%4==0 && n!=0)
    {
        cout<<6<<endl;
    }
    else if((n-1)%4==0)
    {
        cout<<8<<endl;
    }
    else if((n-2)%4==0)
    {
        cout<<4<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
}
