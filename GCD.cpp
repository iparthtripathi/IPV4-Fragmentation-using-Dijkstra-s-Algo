#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n;
        if(n%2==0){
            a=n-3;
            b=2;
            c=1;
        }
        else{
            if(((n-1)/2)%2==0){
                a=(n-1)/2+1;
                b=(n-1)/2-1;
                c=1;
            }
            else{
                a=(n-1)/2+2;
                b=(n-1)/2-2;
                c=1;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<"\n";
    }
}