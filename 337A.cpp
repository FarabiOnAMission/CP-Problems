#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,k,mini,l;

    cin>>n>>x;
    vector<int> st;
    int t=x;
    while(t--)
    {
        cin>>k;
        st.push_back(k);
    }

    sort(st.begin(),st.end());
    mini=INT_MAX;
    for(int i=0;i<st.size();i++)
    {
          l=st[i+n-1]-st[i];
            if(l<=mini)
            {
                mini=l;
            }
    }

    cout<<mini<<endl;

    return 0;
}
