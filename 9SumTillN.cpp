#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    // int ans = 0;
    return (n*(n+1))/2;
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}