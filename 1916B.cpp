#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--)
    {

     long long l,r;
     cin>>l>>r;
     if(2*l>r)
     {
         cout<<-1<<" "<<-1<<endl;
     }
     else
        cout<<l<<" "<<2*l<<endl;

    }
}
