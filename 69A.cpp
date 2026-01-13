#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z;
    int t;
    cin>>t;
    int a=0,b=0,c=0;
    while(t--)
    {
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;

    }
    if(a==0 && b==0 && c==0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
