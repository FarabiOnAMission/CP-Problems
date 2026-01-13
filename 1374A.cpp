#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long t;
    long long x,y,n;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        while(n%x!=y)
        {
            n--;
        }

        cout<<n<<endl;
    }
}
