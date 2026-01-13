#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    bool has1 = false, has2 = false;
    if (a[0] == 0 || a[1] == 0)
        has1 = true;

    for (long long i = 2; i < n; i++)
    {
        if (a[i] == 0)
            has2 = true;
    }

    long long len = n;
    vector<pair<long long, long long>> ans;

    if (has2)
    {
        ans.push_back({2, n});
        len -= (n - 2)-1;
    }

    if (has1)
    {
        ans.push_back({0, 2});
        len = len - 1;
    }

    ans.push_back({0, len});

    cout <<ans.size()<< endl;
    for (auto p:ans)
        cout << p.first + 1 << " " << p.second << endl;
    }
    return 0;
}
