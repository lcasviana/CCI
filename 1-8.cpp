#include <iostream>
using namespace std;

const int N = 6;

void rotate_matrix(int matrix[N][N])
{
    int change[2][N], n = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (matrix[i][j] == 0)
                change[0][n] = i,
                change[1][n] = j,
                n++;

    for (int a = 0; a < n; a++)
    {
        for (int k = 0; k < N; k++)
            matrix[change[0][a]][k] = 0;
        for (int k = 0; k < N; k++)
            matrix[k][change[1][a]] = 0;
    }

    cout << '\n';
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matrix[i][j] = (i + 1) * (i + 1) - (j + 1);
    rotate_matrix(matrix);

    return 0;
}