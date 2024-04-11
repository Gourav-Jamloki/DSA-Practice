#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
    }

    int r = 0, c = m-1;
    bool flag = false;
    
    while (r<n and c>=0)
    {
        if (matrix[r][c]==target)
        {
            flag = true;
        }
        if (matrix[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
        
    }
    if (flag)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element does not exist";
    }
    
    
    return 0;
}