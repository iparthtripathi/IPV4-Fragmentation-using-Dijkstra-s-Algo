#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,c1=0,c2=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            c1++;
            else
            c2++;
        }
        cout<<min(c1,c2)<<endl;
    }
}