/*
    Check Permutation: Given two strings, write a  method to decide if one is a  permutation of the other.
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
bool check_permutation(string first, string second)
{
    const int alphabet = 255;
    long long mask[alphabet];
    memset(mask, 0, sizeof mask);

    for (char c : first)
        mask[c]++;

    for (char c : second)
        if (--mask[c] < 0)
            return false;

    for (int i : mask)
        if (i != 0)
            return false;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << check_permutation("ab", "ba") << endl;
    cout << check_permutation("ab", "ac") << endl;

    return 0;
}