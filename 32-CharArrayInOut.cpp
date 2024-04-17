#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    char arr[50+1] = "Gourav Jamloki"; //Only way where we can cout spaces too
    // cin>>arr;

    // Printing the null character
    cout<<arr[14]<<endl;

    int i = 0;
    while (arr[i]!='\0')
    {
        cout<<arr[i];
        i++; 
    }
    
    return 0;
}