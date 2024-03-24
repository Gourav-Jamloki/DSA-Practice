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

    // WHAT I'VE LEARNED

    int counter = 1;
    while (counter<n)
    {
        for (int i = 0; i < n-counter; i++)
        {
            if (arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
            counter++;
        
    }

    // MY APPROACH (BRUTE FORCE ALGO)

    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < n-i-1; j++)
    //     {
    //         if (arr[j+1]<arr[j])
    //         {
    //             int temp = arr[j+1];
    //             arr[j+1] = arr[j];
    //             arr[j] = temp;
    //         }
            
    //     }
        
    // }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}