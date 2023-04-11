#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        long long n,i,j,s=0,c=0;
        double mean;
        cin>> n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            s=s+arr[i];
        }
        mean=(double)s/n;
        for(i=0;i<n;i++)
        {
            if(arr[i]==mean)
            c++;
        }
        if(c==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
