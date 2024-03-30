#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,st=0,end=0,sum,csum=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)           //input
    {
        cin>>arr[i];
    }
    
    csum=arr[0];
    cin>>sum;
    
    while( st<n && end<n)   // to ensure we are always looping inside array
    {
        if( csum==sum)          // answer found
        {
            cout<<endl<<st<<" "<<end;
            return 0;                               // end the process
        }
        
        else if( csum>sum && st<end )       // move start and ensure it is less than end
        {
            csum-=arr[st];
            st++;
        }
        
        else                // move end in all other cases
        {
            end++;
            csum+=arr[end];
        }
    }
    
    cout<<"\n no array found";
    return 0;
}