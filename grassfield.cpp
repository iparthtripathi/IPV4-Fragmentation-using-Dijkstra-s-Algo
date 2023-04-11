#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int c=0;
        int a[4];
        cin>>a[0]>>a[1];
        cin>>a[2]>>a[3];
        if(a[0]!=0||a[1]!=0||a[2]!=0||a[3]!=0){
            c=1;
        }
        if(a[0]!=0&&a[1]!=0&&a[2]!=0&&a[3]!=0){
            c=2;
        }
        cout<<c;
    }
}