/*
    Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures?
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
bool is_unique(string input)
{
    const int alphabet = 255;

    if (input.size() > alphabet)
        return false;

    bitset<alphabet> mask;
    for (char c : input)
    {
        if (mask[c])
            return false;
        mask[c] = 1;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << is_unique("aacd") << endl;
    cout << is_unique("abcd") << endl;

    return 0;
}