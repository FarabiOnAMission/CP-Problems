#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string a;
    int n = s.size();
    int c = 0;

    if (n % 2 == 0) {
        bool is_palindrome = true;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                is_palindrome = false;
                break;
            }
        }

        if (is_palindrome) {
            cout << "NO" << endl;
            return 0;
        }

        for (int i = (n / 2); i < n; i++) {
            a += s[i];
        }

        reverse(a.begin(), a.end());
        for (int i = 0; i < (n / 2); i++) {
            if (s[i] == a[i]) {
                c++;
            }
        }

        if (c >= ((n / 2) - 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    } else {
        bool is_palindrome = true;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1]) {
                is_palindrome = false;
                break;
            }
        }

        if (is_palindrome) {
            cout << "YES" << endl;
            return 0;
        }

        for (int i = ((n / 2) + 1); i < n; i++) {
            a += s[i];
        }

        reverse(a.begin(), a.end());
        for (int i = 0; i < (n / 2); i++) {
            if (s[i] == a[i]) {
                c++;
            }
        }

        if (c >= (((n - 1) / 2) - 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
