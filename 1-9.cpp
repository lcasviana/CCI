/*
    String Rotation: Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1 and s2, write code to check if s2 is a rotation of s1 using only one call to isSubstring (e.g., "waterbottle" is a rotation of "erbottlewat").
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
bool isSubstring(string, string);
bool string_rotation(string first, string second)
{
    if (first.size() == second.size() && first.size() > 0)
    {
        string temp = first + first;
        return isSubstring(temp, second);
    }
    return false;
}

bool isSubstring(string first, string second)
{
    if (first.find(second) != std::string::npos)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << string_rotation("waterbottle", "erbottlewat") << endl;

    return 0;
}