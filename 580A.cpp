#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int n;
    vector <int> store;
    vector<int> ans;
    int MAX=1;
    int c=1;
    for(int i=0;i<x;i++)
    {
        cin>>n;
        store.push_back(n);
    }

    for(int i=1;i<=x-1;i++)
    {
        if(store[i]>=store[i-1])
        {
            c++;
        }
        else
        {
            c=1;
        }

        MAX=max(MAX,c);
    }


    cout<<MAX<<endl;
}
