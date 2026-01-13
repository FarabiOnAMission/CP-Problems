#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    int t,m1,m2;
    vector<int>store;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        m1=max(a,b);
        cin>>c>>d;
        m2=max(c,d);

        store.push_back(a);
        store.push_back(b);
        store.push_back(c);
        store.push_back(d);

        sort(store.begin(),store.end());

        int maxi = max(m1,m2);
        int mini = min(m1,m2);

        if(maxi==store[3] && mini==store[2])
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

        store.clear();
    }
}
