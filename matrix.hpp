#include <bits/stdc++.h>
using namespace std;

const int N = 6;

void init_matrix(int matrix[N][N])
{
    srand (time(NULL));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            matrix[i][j] = rand() % (N * N);
}

void print_matrix(int matrix[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << matrix[i][j] << '\t';
        cout << endl;
    }
    cout << endl;
}