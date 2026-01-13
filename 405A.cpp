#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x;
    vector <int> store;
    while(t--)
    {
        cin>>x;
        store.push_back(x);
    }

    sort(store.begin(),store.end());

    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<" ";
    }

    return 0;
}
