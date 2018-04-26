/*
    One Away: There are three types of edits that can be performed on strings: insert a  character, remove a character, or replace a character. Given two strings, write a function to check if they are one edit (or zero edits) away.
    EXAMPLE
    pale,  ple  -> true
    pales, pale -> true
    pale,  bale -> true
    pale,  bae  -> false
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
bool one_away(string first, string second)
{
    if (first == second)
        return true;

    if (abs((int)(first.size() - second.size())) >= 2)
        return false;

    if (first.size() == second.size())
    {
        int diff = 0;
        for (int i = 0; i < first.size(); i++)
            if (first[i] != second[i])
                if (++diff > 1)
                    return false;
        return true;
    }

    int changed = false;
    if (first.size() < second.size())
    {
        for (int i = 0; i < first.size(); i++)
            if (first[i] != second[i + changed])
            {
                if (changed)
                    return false;
                changed = true;
                i--;
            }
    }
    else
    {
        for (int i = 0; i < second.size(); i++)
            if (first[i + changed] != second[i])
            {
                if (changed)
                    return false;
                changed = true;
                i--;
            }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << one_away("pale", "pale") << endl;
    cout << one_away("pale", "paleacbd") << endl;
    cout << one_away("pale", "pake") << endl;
    cout << one_away("pale", "bake") << endl;
    cout << one_away("pale", "ple") << endl;
    cout << one_away("pale", "pre") << endl;

    return 0;
}