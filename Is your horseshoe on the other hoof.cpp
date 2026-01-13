#include<iostream>
#include<vector>
#include<set>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int main()
{
    int a;
    int number=0;
    vector <int> store;

    for(int i=0;i<4;i++)
    {
        cin>>a;
        store.push_back(a);
    }

    std::set<int> s(store.begin(),store.end());

    cout<<4-s.size()<<endl;

    return 0;

}
