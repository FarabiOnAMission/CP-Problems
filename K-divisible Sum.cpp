#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int n;
    int a,b;
    int x=0;
    int counts=0;
    vector <int> v;

    cin>>n;


    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        do
        {
            a=a+;
            counts++;

        }while(a%b!=0);
        v.push_back(counts);
        x=0;
        counts=0;

    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}


