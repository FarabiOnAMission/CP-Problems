#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int x;
    vector<int> st;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.push_back(x);
    }

    sort(st.begin(),st.end());

    for(int i=0;i<m;i++)
    {
        if(st[i]>0)
        {
            break;
        }
        else
        {
            sum+=st[i];
        }

    }

    cout<<abs(sum)<<endl;


}

