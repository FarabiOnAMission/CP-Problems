#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int x;
    vector <int> store;
    set <int> s;
    int c=0;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        store.push_back(x);

    }

    for(int i=0;i<n;i++)
    {
        s.insert(store[i]);
    }

    if(s.size()>=k)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<store.size();i++)
        {
            for(int j=i+1;j<store.size();j++)
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
                cout<<i+1<<" ";
                c++;
            }
            if(c==k)
                break;
        }
    }
    else
        cout<<"NO"<<endl;

}
