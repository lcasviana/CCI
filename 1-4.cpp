#include <iostream>
#include <locale>
#include <algorithm>
using namespace std;

bool palidrome_permutation(string one)
{
    string two;
    for (int i = 0; i < one.size(); i++)
        if (isalpha(one[i]))
            two.push_back(tolower(one[i]));
    sort(two.begin(), two.end());
    bool middle = false;
    for (int i = 0, j = 1; j < two.size(); i += 2, j += 2)
        if (two[i] != two[j])
            if (middle)
                return false;
            else
                i--, j--, middle = true;
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