#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i;
    cin>> n;
    long long arr[n];
    for(i=0;i<n;i++)
    cin>> arr[i];
    sort(arr,arr+n);
    cout<<max(arr[n-2]*arr[n-1],arr[0]*arr[1]);
}