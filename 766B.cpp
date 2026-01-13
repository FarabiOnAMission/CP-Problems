#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<long long>a(n);
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i=2;i<=n;i++)
    {
        if(a[i-2]+a[i-1]>a[i])
        {
            c=1;
            break;
        }
    }

    if(c==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

