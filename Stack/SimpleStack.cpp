#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int>s;
    while(true)
    {
     string k;
     cin>>k;
     if(k=="push")
     {
         int n;
         cin>>n;
         s.push(n);

         cout<<"ok"<<endl;
     }
     else if(k=="pop")
     {
         cout<<s.top()<<endl;
         s.pop();
     }
     else if(k=="back")
     {
         cout<<s.top()<<endl;
     }
     else if(k=="size")
     {
         cout<<s.size()<<endl;
     }
     else if(k=="clear")
     {
         while(!s.empty())
         {
             s.pop();
         }
         cout<<"ok"<<endl;
     }
     else
     {
         cout<<"bye"<<endl;
         break;
     }
    }
}
