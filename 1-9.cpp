#include <iostream>
using namespace std;

bool string_rotation(string one, string two)
{
    if (one.size() != two.size())
        return false;
    if (one == two)
        return true;
    int size = one.size();
    for (int j = 1; j < size; j++)
    {
        if (one[0] == two[j])
        {
            int x = 1, y = j + 1;
            for (; y < size; x++, y++)
                if (one[x] != two[y])
                    break;
            if (y == size && one.substr(x, j) == two.substr(0, j))
                return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << string_rotation("waterbottle", "erbottlewat") << endl;

    return 0;
}