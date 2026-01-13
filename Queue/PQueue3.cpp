#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    priority_queue<int,vector<int>,greater<int>>q;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="push")
        {
            int a;
            cin>>a;
            q.push(a);
        }
        else if(s=="top")
        {
            cout<<q.top()<<endl;
        }
        else
        {
            q.pop();
        }
    }
}
