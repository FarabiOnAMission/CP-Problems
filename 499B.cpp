#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> f2;
    vector<string> f1;
    vector<string> f3;

    string a,b;
    while(m--)
    {
        cin>>a>>b;
        if(b.size()<a.size())
        {
            f2.push_back(b);
        }
        else
            f2.push_back(a);


       f1.push_back(a);
    }

    while(n--)
    {
        cin>>a;
        f3.push_back(a);
    }

    for(int i=0;i<f3.size();i++)
    {
        for(int j=0;j<f1.size();j++)
        {
            if(f3[i]==f1[j])
            {
                cout<<f2[j]<<" ";
            }
        }
    }

}
