#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int sizearr;
    int index;
    int counts {0};

    cin>>sizearr;
    int store[sizearr];
    cin>>index;


    for(int i=0; i <sizearr ; i++)
    {
        cin>>store[i];

    }
    for(int i=0;i<sizearr;i++)
    {

    if(store[i] >= store[index-1] && store[i]>0)
    {
            counts++;
    }
    }
    cout<<counts<<endl;

    return 0;
}
