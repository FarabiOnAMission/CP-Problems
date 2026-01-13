#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int n;
    int x,y;
    cin>>n;
    vector <int> sum;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        int n=y-x+1;
        sum.push_back((n*(2*x + (n-1)*1))/2);

    }

    for(int i=0;i<sum.size();i++)
    {
        cout<<sum[i]<<endl;
    }
}
