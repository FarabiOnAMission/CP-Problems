#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long l,r;
    cin>>l>>r;

    long long m=l,n=l+1;

    cout<<"YES"<<endl;
    while(n<=r)
    {
        cout<<m<<" "<<n<<endl;
        m+=2;
        n+=2;
    }

}
