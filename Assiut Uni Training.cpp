#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n/60;

    if((n%60)>=10)
    {
        cout<<21+x<<":"<<n%60;
    }
    else
        cout<<21+x<<":"<<0<<n%60;

}
