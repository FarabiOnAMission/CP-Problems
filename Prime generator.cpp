#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n+1, 0);

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            arr[j]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==2)
            cout<<i<<" ";
    }
}
