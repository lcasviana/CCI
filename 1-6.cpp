#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

string string_compression(string line)
{
    string result;
    int count = 1;
    char prev = line[0];

    for (int i = 1; i <= line.size(); i++, count++)
    {
        if (line[i] != prev)
        {
            result.push_back(prev);
            result += to_string(count);
            prev = line[i];
            count = 0;
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << string_compression("p") << endl;
    cout << string_compression("pale") << endl;
    cout << string_compression("pppaaa") << endl;

    return 0;
}