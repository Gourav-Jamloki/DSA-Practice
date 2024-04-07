#include <bits/stdc++.h>
using namespace std;

int main()
{

    int matrix[3][3] = {{1, 3, 5},
                        {7, 9, 11},
                        {13, 15, 17}};

    int target = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << "Element found at (" << i << ", " << j << ")" << endl;
                return 0;
            }
        }
    }

    cout << "Element not found" << endl;
    return 0;
}