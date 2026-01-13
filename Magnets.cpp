#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int n;
    string a;
    int count = 1;
    vector<string> storage;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        storage.push_back(a);
    }

    for (size_t i = 0; i < storage.size() - 1; i++)
    {
        if ((storage[i] == "10" && storage[i + 1] == "01") ||
            (storage[i] == "01" && storage[i + 1] == "10"))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
