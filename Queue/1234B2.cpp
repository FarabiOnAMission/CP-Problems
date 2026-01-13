#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    deque<long long> dq;
    map<long long, bool> inDeque;

    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        if (!inDeque[x]) // Not already in deque
        {
            if (dq.size() == k)
            {
                inDeque[dq.back()] = false;
                dq.pop_back();
            }
            dq.push_front(x);
            inDeque[x] = true;
        }
    }

    cout << dq.size() << "\n";
    for (auto x : dq)
    {
        cout << x << " ";
    }
}
