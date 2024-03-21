#include <bits/stdc++.h>
// #include<iostream>
#include <climits>
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
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    int minNo = INT_MAX;
    int maxNo = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
        
    }
    cout<<maxNo<<endl<<minNo<<endl;
    
    
    
    
}