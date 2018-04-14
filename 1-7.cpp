#include <iostream>
using namespace std;

const int N = 6;

void rotate_matrix(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }

    for (int i = 0; i < N / 2; i++)
    {
        for (int j = i; j < N - i - 1; j++)
        {
            int Ai = i, Aj = j;
            int Bi = j, Bj = N - 1 - i;
            int Ci = N - 1 - i, Cj = N - 1 - j;
            int Di = N - 1 - j, Dj = i;

            // if (i == 1)
            // {
            //     cout << 'A' << Ai << Aj << endl;
            //     cout << 'B' << Bi << Bj << endl;
            //     cout << 'C' << Ci << Cj << endl;
            //     cout << 'D' << Di << Dj << endl;
            // }

            int A = matrix[Ai][Aj];
            int B = matrix[Bi][Bj];
            int C = matrix[Ci][Cj];
            int D = matrix[Di][Dj];

            matrix[Ai][Aj] = D;
            matrix[Bi][Bj] = A;
            matrix[Ci][Cj] = B;
            matrix[Di][Dj] = C;
        }
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
            matrix[i][j] = (i + 1) * (j + 1) + j + 1;
    rotate_matrix(matrix);

    return 0;
}