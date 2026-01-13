#include<iostream>
#include<set>

using std::cout;
using std::cin;
using std::endl;
using std::set;

int main()
{
    int a,b,n;
    int levels;
    cin>>n;
    set <int> s;

    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>levels;
        s.insert(levels);
    }
    cin>>b;
    for(int i=0;i<b;i++)
    {
        cin>>levels;
        s.insert(levels);
    }

    if(s.size()== n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;

    return 0;

}
