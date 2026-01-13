#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,x;
    int c=0;
    vector <int> store;
    for(int i=0;i<t;i++)
    {
        store.clear();
        cin>>n;
        for(int j=0;j<2*n;j++)
        {

            cin>>x;
            store.push_back(x);
        }


        for(int j=0;j<store.size();j++)
        {
            c=0;
            for(int k=j;k<store.size();k++)
            {
                if(store[j]== store[k])
                {
                    c++;
                }
            }
            if(c>2)
            {
                break;
            }
        }

        if(c>2)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;




}

}
