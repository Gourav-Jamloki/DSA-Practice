#include <bits/stdc++.h>
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

    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i-1;

        while (arr[j]>current && j>=0)
        {
            arr[j+1] = arr[j]; //Swaps the sorted side (left) of array
            j--;               //Iterates through left till the condition meets
        }
        arr[j+1] = current;    //When conditions meets it swaps with the current number
        
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}