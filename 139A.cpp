#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int c=1;
    vector<int>p(8);
    for(int i=1;i<=7;i++)
    {
        cin>>p[i];
    }

    int i=1;

    while(n>0)
    {

        n=n-p[i];
        if(n<=0)
        {
            break;
        }
        i=(i%7)+1;
    }

    cout<<i<<endl;
}
