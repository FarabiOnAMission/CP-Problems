#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
    return a * (b / __gcd(a, b));
}

int main()
 {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

        int l = lcm(s1.size(), s2.size());

        string rep1 = "", rep2 = "";

        for (int i = 0; i < l / s1.size(); ++i) rep1 += s1;
        for (int i = 0; i < l / s2.size(); ++i) rep2 += s2;

        if (rep1 == rep2)
            cout << rep1 << endl;
        else
            cout << -1 << endl;
    }
}
