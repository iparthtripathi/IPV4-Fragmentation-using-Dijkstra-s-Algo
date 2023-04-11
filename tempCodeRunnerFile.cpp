#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,m;
    cin>>n;
    int a[n],s[n];
    for(int i=0;i<n;i++){
        s[i]=0;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<n;j++){
            m=a[i]%10;
            if(m>r)
            r=m;
            s[j]=s[j]+m;
            a[i]=a[i]/10;
        }
    }
    sort(s,s+n);
    if(n==1)
    cout<<r;
    else
    cout<<s[n-1];
}