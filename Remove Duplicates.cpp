#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    vector<int> store;
    int x;
    vector<int> finalr;

    for(int i=0;i<a;i++)
    {
        cin>>x;
        store.push_back(x);
    }

    for(int i=a-1;i>=0;i--)
    {
        for(int j=i-1;j>=0;j--)
        {
            if(store[i]==store[j])
            {
                store[j]=0;
            }
        }
    }



    for(int i=0;i<store.size();i++)
    {
        if(store[i]!=0)
        {
            finalr.push_back(store[i]);
        }

    }

    cout<<finalr.size()<<endl;

    for(int i=0;i<finalr.size();i++)
    {
        cout<<finalr[i]<<" ";
    }
}
