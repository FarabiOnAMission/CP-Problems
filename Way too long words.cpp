#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string word;
    int n;
    cin>>n;
    string store[n];
    for(int i=0;i<n;i++)
    {
        cin>>word;
        store[i]=word;
    }

    for(int i=0;i<n;i++)
    {
        int sizestore = store[i].size();
        if (sizestore <= 10)
        {
         cout<< store[i]<<endl;
        }
        else
        {
            cout<< store[i][0] << sizestore-2 << store[i][sizestore-1]<<endl;
        }
    }

    return 0;

}
