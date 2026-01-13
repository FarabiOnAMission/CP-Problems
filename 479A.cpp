#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int a1=(a+b)*c;
    int a2=a+(b*c);
    int a3=a*b*c;
    int a4=(a*b)+c;
    int a5=a*(b+c);
    int a6=a+b+c;

    int ans=max({a1,a2,a3,a4,a5,a6});

    cout<<ans<<endl;
}
