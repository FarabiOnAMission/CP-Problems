#include<iostream>
#include<vector>
#include<array>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    int a,b;
    int x=0;
    cin>>n;
    std::vector <int> home;
    std::vector <int> guest;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        home.push_back(a);
        guest.push_back(b);
    }

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          if(guest[i] == home[j])
            x++;
      }
    }

    cout<<x<<endl;

    return 0;
}
