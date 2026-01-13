#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int x,c=0;
    vector <int> arr;
    vector<int>ans;
    while(t--)
    {   int n;
        cin>>n;
        while(n--)
        {
             cin>>x;
             arr.push_back(x);
        }

        for(int i=0;i<arr.size()-2;i++)
        {
            if(arr[i]!=arr[i+1] && arr[i]==arr[i+2])
            {
                cout<<i+2<<endl;
                break;
            }
            else if(arr[i]!=arr[i+1] && arr[i]!=arr[i+2])
            {
                cout<<i+1<<endl;
                break;
            }
            if(arr[i]==arr[i+1] && arr[i]!=arr[i+2])
            {
                cout<<i+3<<endl;
                break;
            }

        }

        arr.clear();

    }
}


