#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long res=1;
    long ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans=ans+arr[i]*res;
        res*=2;   
    }
    cout<<ans;
    return 0;
}
