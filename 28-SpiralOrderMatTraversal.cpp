#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j]; // Corrected indexing
        }
    }

    // Spiral Order Traversal

    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // For row start

        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }

        row_start++; // As we have traversed the first row

        // For col end

        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }

        col_end--; // As we have traversed the last column

        // For row end

        if (row_start <= row_end) // Check if rows still exist
        {
            for (int col = col_end; col >= col_start; col--)
            {
                cout << arr[row_end][col] << " ";
            }

            row_end--; // As we have traversed the last row
        }

        // For col start

        if (col_start <= col_end) // Check if columns still exist
        {
            for (int row = row_end; row >= row_start; row--)
            {
                cout << arr[row][col_start] << " ";
            }

            col_start++; // As we have traversed the first column
        }
    }

    return 0;
}
