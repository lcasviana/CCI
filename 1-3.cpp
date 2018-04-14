#include <iostream>
using namespace std;

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