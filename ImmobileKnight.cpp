#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n==3&&m==3){
            cout<<2<<" "<<2<<"\n";
        }
        else if(n==3){
            cout<<2<<" "<<m<<"\n";
        }
        else if(m==3){
            cout<<n<<" "<<2<<"\n";
        }
        else{
            cout<<n<<" "<<m<<"\n";
        }
    }
}