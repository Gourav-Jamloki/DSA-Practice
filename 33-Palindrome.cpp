#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[n-1-i])
        {
            check = 0;
        }
        
    }

    if (check == 1)
    {
        cout<<"The word "<<arr<<" is a Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }
    
    return 0;
}