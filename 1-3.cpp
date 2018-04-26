/*
    URLify: Write a method to replace all spaces in a string with '%2e: You may assume that the string has sufficient space at the end to hold the additional characters, and that you are given the "true" length of the string. (Note: if implementing in Java, please use a  character array so that you can perform this operation in place.)
    EXAMPLE
    Input:  "Mr John Smith    ", 13
    Output: "Mr%2eJohn%2eSmith"
*/

#include <bits/stdc++.h>
using namespace std;

// O(n)
string urlify(string input, int size)
{
    for (int i = input.size() - 1, j = size - 1; j >= 0 && j != i; i--, j--)
    {
        if (input[j] == ' ')
            input[i--] = '0',
            input[i--] = '2',
            input[i] = '%';
        else
            input[i] = input[j];
    }
    return input;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << urlify("Mr John Smith    ", 13) << endl;

    return 0;
}