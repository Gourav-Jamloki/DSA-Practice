#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout<<LinearSearch(arr, N, x);
    return 0;
}
