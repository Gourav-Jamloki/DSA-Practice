#include <bits/stdc++.h>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int indx[n+10];

    for (int i = 0; i < n; i++)
    {
        indx[i] = -1;        
    }
    
    int minIdx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (indx[arr[i]]!=-1)
        {
            minIdx = min(minIdx,indx[arr[i]]);   
        }
        else
        {
            indx[arr[i]] = i;
        }
        
    }
    
    cout<<"The first occurance element is --> "<<arr[minIdx];
    

    return 0;
}