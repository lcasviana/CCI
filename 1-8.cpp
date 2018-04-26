/*
    Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0.
*/

#include <bits/stdc++.h>
#include "matrix.hpp"
using namespace std;

// O(n^2)
void zero_matrix(int matrix[N][N])
{
    bool first_row = false, first_col = false;
    for (int i = 0; i < N; i++)
        if (matrix[0][i] == 0)
        {
            first_row = true;
            break;
        }

    for (int i = 0; i < N; i++)
        if (matrix[i][0] == 0)
        {
            first_col = true;
            break;
        }

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < N; i++)
    {
        if (matrix[0][i] == 0)
        {
            for (int j = 1; j < N; j++)
            {
                matrix[j][i] = 0;
            }
        }
    }

    for (int i = 1; i < N; i++)
    {
        if (matrix[i][0] == 0)
        {
            for (int j = 1; j < N; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (first_row)
    {
        for (int i = 0; i < N; i++)
        {
            matrix[0][i] = 0;
        }
    }

    if (first_col)
    {
        for (int i = 0; i < N; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[N][N];
    init_matrix(matrix);
    print_matrix(matrix);
    zero_matrix(matrix);
    print_matrix(matrix);

    return 0;
}