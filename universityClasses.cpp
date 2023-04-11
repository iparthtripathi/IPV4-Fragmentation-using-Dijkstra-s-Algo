#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,m;
    cin>>n;
    int a[n],s[7];
    for(int i=0;i<n;i++){
        cin>>a[i];
        s[i]=0;
        for(int j=0;j<7;j++){
            m=a[i]%10;
            s[j]=s[j]+m;
            a[i]=a[i]/10;
        }
    }
    sort(s,s+7);
    cout<<s[6];
}