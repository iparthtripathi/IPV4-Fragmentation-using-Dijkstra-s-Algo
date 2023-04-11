#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,x,y;
    cin>>n>>a>>x>>b>>y;
    if(a<b){
        if((a+b)/2<=x&&(a+b)/2>=y){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    else{
        if((a+b)/2>=x&&(a+b)/2<=y){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
}