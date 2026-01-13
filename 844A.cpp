#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> c;

    for (char ch : s) {
        c.insert(ch);
    }

    int k;
    cin>>k;
    if(s.size()<k)
    {
        cout<<"impossible"<<endl;
    }
    else
    {
    int s1=c.size();
    cout<<max(0,k-s1)<<endl;
    }
}
