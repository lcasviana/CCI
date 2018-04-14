#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool one_away(string one, string two)
{
    int size = min(one.size(), two.size());
    if (one == two)
    {
        return true;
    }
    if (abs((int) (one.size() - two.size())) >= 2)
    {
        return false;
    }
    if (one.size() == two.size())
    {
        int diff = 0;
        for (int i = 0; i < size; i++)
            if (one[i] != two[i])
                diff++;
        return diff <= 1;
    }
    int changed = false;
    for (int i = 0, j = 0; i < size; i++, j++)
    {
        if (one[i] != two[j] && !changed)
        {
            one.size() == size? j++ : i++;
            changed = true;
        }
        else if (one[i] != two[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << one_away("pale", "pole") << endl;
    cout << one_away("pale", "ple") << endl;
    cout << one_away("pale", "bake") << endl;

    return 0;
}