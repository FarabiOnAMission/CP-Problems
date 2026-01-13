#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    unordered_map<long long,long long>freq;
    unordered_set<long long>us;
    long long homo=0LL;
    while(t--)
    {
        string s;
        long long n;
        cin>>s>>n;
        long long hetero=0LL;
        long long k;
        if(s=="insert")
        {
            if(!us.count(n))
                us.insert(n);

            freq[n]++;

            if(freq[n]==2)
                homo++;

        }
        else if(s=="delete")
        {
            if(freq[n]==2)
                homo--;
            if(freq[n]==1)
            {
                us.erase(n);
            }
            freq[n]--;

        }


        hetero=us.size()-1;


        if((homo) && (hetero))
            cout<<"both"<<endl;
        else if((homo) && (!hetero))
            cout<<"homo"<<endl;
        else if((!homo) && (hetero>0))
            cout<<"hetero"<<endl;
        else
            cout<<"neither"<<endl;


        }
    }
