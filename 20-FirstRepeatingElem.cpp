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

    int idx[n+10];

    for (int i = 0; i < n; i++)
    {
        idx[i] = -1;        
    }
    
    int minIdx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]]!=-1)
        {
            minIdx = min(minIdx,idx[arr[i]]);   
        }
        else
        {
            idx[arr[i]] = i;
        }
        
    }
    
    cout<<"The first occurance element is --> "<<arr[minIdx];
    

    return 0;
}