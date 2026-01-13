#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n);
        for (int i = 0; i < n; ++i) cin >> b[i];

        long long L = 1;

        for (int i = 0; i + 1 < n; ++i) {
            if (b[i] == 0)
                continue;
            if (b[i + 1] % b[i] == 0)
                continue;

            long long a = b[i], c = b[i + 1];
            while (c != 0) {
                long long temp = a % c;
                a = c;
                c = temp;
            }
            long long G = a;

            long long B = b[i] / G;

            long long x = L, y = B;
            while (y != 0) {
                long long temp = x % y;
                x = y;
                y = temp;
            }
            long long d = x;

            __int128 tmp = (__int128)L / d * B;
            L = (long long)tmp;
        }

        cout << L << "\n";
    }

    return 0;
}
