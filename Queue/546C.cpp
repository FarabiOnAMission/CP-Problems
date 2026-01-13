#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long k1, k2;
    cin >> k1;

    deque<long long> dq1, dq2;

    for (long long i = 0; i < k1; i++) {
        long long x;
        cin >> x;
        dq1.push_back(x);
    }

    cin >> k2;
    for (long long i = 0; i < k2; i++) {
        long long x;
        cin >> x;
        dq2.push_back(x);
    }

    long long c = 0;

    long long maxSteps = 1;
    for (int i = 2; i <= n + 1; ++i) maxSteps *= i;

    while (!dq1.empty() && !dq2.empty()) {
        long long a = dq1.front(); dq1.pop_front();
        long long b = dq2.front(); dq2.pop_front();

        if (a > b) {
            dq1.push_back(b);
            dq1.push_back(a);
        } else {
            dq2.push_back(a);
            dq2.push_back(b);
        }

        c++;

        if (c > maxSteps) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << c << " ";
    if (!dq1.empty()) cout << 1 << endl;
    else cout << 2 << endl;

    return 0;
}
