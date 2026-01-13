#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int t=(n-1);
    int i=1;
    int ans=0;
    while(t>0)
    {
        ans+=i*t;
        i++;
        t--;
    }

    cout<<ans+n<<endl;
}
