#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main()
{
    deque<long long>dq;

    while(true)
    {
        string s;
        long long a;
        cin>>s;
        if(s=="push_back")
        {
            cin>>a;
            dq.push_back(a);
            cout<<"ok"<<endl;
        }
        else if(s=="push_front")
        {
            cin>>a;
            dq.push_front(a);
            cout<<"ok"<<endl;
        }
        else if(s=="pop_back")
        {
            cout<<dq.back()<<endl;
            dq.pop_back();
        }
        else if(s=="pop_front")
        {
            cout<<dq.front()<<endl;
            dq.pop_front();
        }
        else if(s=="front")
        {
            cout<<dq.front()<<endl;
        }
        else if(s=="back")
        {
            cout<<dq.back()<<endl;
        }
        else if(s=="size")
        {
            cout<<dq.size()<<endl;
        }
        else if(s=="clear")
        {
            dq.clear();
            cout<<"ok"<<endl;
        }
        else
        {
            cout<<"bye"<<endl;
            break;
        }

    }
}
