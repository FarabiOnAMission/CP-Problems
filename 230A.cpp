#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;
    vector<int>st;
    vector<int>bo;
    int a,b;
    int c_s=0;
    cin>>s>>n;
    c_s=s;
    int c=0;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        st.push_back(a);
        bo.push_back(b);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(st[j]<=st[i])
            {
                swap(st[i],st[j]);
                swap(bo[i],bo[j]);
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        if(c_s>st[i])
        {
            c_s+=bo[i];
            c=1;
        }
        else
        {
            c=0;
            break;
        }

    }

    if(c==1)
    {
        cout<<"YES"<<endl;
    }

    else
        cout<<"NO"<<endl;


}
