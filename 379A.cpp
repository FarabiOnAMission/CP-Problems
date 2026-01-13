#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    for (int i = 1; i <= a; i++)
    {
    if (i % b == 0)
        ans++;

if (ans % b == 0)
    ans++;
    }


    cout<<ans+a<<endl;

}
