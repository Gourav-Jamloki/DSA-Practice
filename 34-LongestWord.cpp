// Find the longest word in a sentence
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    // LOGIC

    int currLen = 0;
    int maxLen = 0;

    int i = 0;

    // Variable to iterate over every word's first char
    // And at last gives the 'maxst' the longest word's first char
    int st = 0; 
    int maxst = 0;

    while (1)
    {
        if (arr[i]==' ' || arr[i]=='\0')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            
            currLen = 0;
            st = i+1;
        }
        else
        {
            currLen++;
        }
        if (arr[i]=='\0')   
        {
            break;
        }

        i++;
        
    }
    
    cout<<maxLen<<endl; //Returns the max word's length

    // Printing the actual longest word

    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[maxst+i];
    }
    


    return 0;
}