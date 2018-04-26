/*
    Palindrome Permutation: Given a  string, write a  function to check if it is a  permutation of a  palin drome. A  palindrome is a  word or phrase that is the same forwards and backwards.  A permutation is a  rearrangement of letters. The palindrome does not need to be limited to just dictionary words.
    EXAMPLE
    Input: Tact Coa
    Output: True (permutations:"taco cat'; "atco cta'; etc.)
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
bool palidrome_permutation(string input)
{
    const int alphabet = 255;
    unsigned long long mask[alphabet];
    memset(mask, 0, sizeof mask);

    for (char c : input)
        if (isalpha(c))
            mask[tolower(c)]++;

    bool middle = false;
    for (int i : mask)
        if (i % 2 != 0)
        {
            if (middle)
                return false;
            middle = true;
        }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << palidrome_permutation("Tact Coa") << endl;
    cout << palidrome_permutation("TactdCca") << endl;

    return 0;
}