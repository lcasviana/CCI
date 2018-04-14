#include <iostream>
#include <algorithm>
using namespace std;

bool permutation(string first, string second)
{
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    return first == second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << permutation("ab", "ba") << endl;
    cout << permutation("ab", "ac") << endl;

    return 0;
}