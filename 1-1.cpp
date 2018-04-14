#include <iostream>
using namespace std;

bool unique_characters(string str)
{
    char first = str[0];
    for (int i = 1; i < str.size(); i++)
        if (first != str[i])
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << unique_characters("aa") << endl;
    cout << unique_characters("ab") << endl;

    return 0;
}