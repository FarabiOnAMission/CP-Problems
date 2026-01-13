#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    int N,K;
    int a;
    vector<int> moneystore;
    vector<int> store;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>N>>K;
        for(int j=0;j<N;j++)
        {
          cin>>a;
          moneystore.push_back(a);
        }

    for(int k=0;k<N;k++)
    {
        if(moneystore[k]>K)
        {
            store.push_back(0);
        }
        else
        {
            K=K-moneystore[k];
            store.push_back(1);
        }

    }
    for(int l=0;l<N;l++)
    {
        cout<<store[l];
    }
    store.clear();
    moneystore.clear();
    cout<<"\n";


    }


}
