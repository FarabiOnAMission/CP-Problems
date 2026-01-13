#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        uint32_t n;
        cin >> n;
        cout << (~n & 0xFFFFFFFF) << endl;
    }
}