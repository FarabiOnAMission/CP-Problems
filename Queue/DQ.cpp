#include<iostream>
#include<deque>

using namespace std;

int main()
{
    long long q;
    cin>>q;
    deque<long long>dq;
    while(q--)
    {
        long long a,d,c;
        cin>>a>>d;
        if(a==0)
        {
            cin>>c;
            if(d==0)
            {
                dq.push_front(c);
            }
            else
            {
                dq.push_back(c);
            }
        }
        else if(a==1)
        {
            cout<<dq[d]<<endl;
        }
        else
        {
            if(d==0)
            {
                dq.pop_front();
            }
            else
            {
                dq.pop_back();
            }
        }
    }
}
