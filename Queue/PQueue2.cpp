#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        priority_queue<int>q;
        for(int i=0;i<n;i++)
        {
         int a;
         cin>>a;
         q.push(a);
        }

        while(q.top()!=0)
        {
            int top=q.top();
            cout<<top<<" ";
            q.pop();
            q.push(top/2);
        }

    }
}
