#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    int a,b,n;
    int count=0;
    cin>>n;
    vector <int> store;

    for(int i=0;i<n;i++)
    {

    cin>>a>>b;
    count=0;

    if(a%b!=0)
    {
     count = b - (a%b);
     store.push_back(count);
    }


    else
        store.push_back(0);

    }

    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<endl;
    }

    return 0;

}
