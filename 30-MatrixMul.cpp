#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Matrix Multiplication is only possible when the 1st matrix's column 
    // is equals to the 2nd matrix's row 

    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout<<"Enter m1 ["<<i<<"] ["<<j<<"] element's "<<endl;
            cin>>m1[i][j];
        }
        
    }

    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<"Enter m2 ["<<i<<"] ["<<j<<"] element's "<<endl;
            cin>>m2[i][j];
        }
        
    }

    int ans[n1][n3];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
        
    }
    
    // Matrix Multiplication Main Logic --->
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j]; //here k will be used as a row & column case
            }
            
        }
        
    }
    
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}