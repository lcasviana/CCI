/*
    String Compression: Implement a  method to perform basic string compression using the counts of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the "compressed" string would not become smaller than the original string, your method should return the original tring. You can assume the string has only uppercase and lowercase letters (a - z).
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
string string_compression(string input)
{
    string result;
    int count = 1;
    char prev = input[0];

    for (int i = 1; i <= input.size(); i++, count++)
    {
        if (input[i] != prev)
        {
            result.push_back(prev);
            result += to_string(count);
            prev = input[i];
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