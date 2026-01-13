#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n=0,sum=0,my=0;
    vector <int> store;
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        store.push_back(x);
        sum=sum+x;
    }

    sort(store.begin(),store.end(),greater<int>());

    int i=0;
    do
    {
        my=my+store[i];
        n++;
        i++;
    }while(my<=(sum/2));

    cout<<n<<endl;

    return 0;

}
