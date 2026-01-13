#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    unordered_map<int,int>freq;
    vector<int>v;
    while(cin>>x)
    {
        if(freq.find(x)==freq.end())
        {
            v.push_back(x);
            freq[x]++;
        }
        else
        {
            freq[x]++;
        }

    }

    for(int i=0;i<v.size();i++)
    {

        cout<<v[i]<<" "<<freq[v[i]]<<endl;
    }
}
