#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long co=0;
    long long ce=0;
    while(n--)
    {
        long long x;
        cin>>x;
        if(x%2==1)
        {
            co++;
        }
        else
            ce++;
    }

    if(co>0)
    {
        cout<<"First"<<endl;
    }
    else
        cout<<"Second"<<endl;
}
