#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,j,c,s1,t,k=0;
        cin>>n;
        long long s[n],arr[n];
        for(i=0;i<n;i++)
        cin>>s[i];
        for(i=0;i<n;i++)
        {
            s1=s[i];
            for(j=0;j<n;j++)
            {
                if(s[j]==s1)
                {
                    c++;
                    arr[j]=i;
                    arr[i]=j;
                }
            }
            if(c<1)
            break;
        }
        if(i==n-1)
        {
            for(i=0;i<n;i++)
            cout<<arr[i]<<" "<<endl;
        }
        else{
            cout<<-1;
        }
    }
}