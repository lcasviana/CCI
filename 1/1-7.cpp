/*
    Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes, write a method to rotate the image by 90 degrees. Can you do this in place?
*/

#include <bits/stdc++.h>
#include "matrix.hpp"
using namespace std;

// O(n^2)
void rotate_matrix(int matrix[N][N])
{
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = i; j < N - i - 1; j++)
        {
            int Ai = i, Aj = j;
            int Bi = j, Bj = N - 1 - i;
            int Ci = N - 1 - i, Cj = N - 1 - j;
            int Di = N - 1 - j, Dj = i;

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
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[N][N];
    init_matrix(matrix);
    print_matrix(matrix);
    rotate_matrix(matrix);
    print_matrix(matrix);

    return 0;
}