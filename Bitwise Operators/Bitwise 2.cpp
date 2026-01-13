#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;
    int m=0;

    for(int i=l;i<=r;i++)
    {
        for(int j=i+1;j<=r;j++)
        {
            m=max(m,i^j);
        }
    }

    cout<<m<<endl;

}