#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    const int N = 1e6 + 2;
    bool checkArr[N];

    int ans = -1;
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        checkArr[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            checkArr[arr[i]] = true;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (checkArr[i] == false)
        {
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;
    
    return 0;
}