#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,x,y,d;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y>>d;
            if((n-x>=d)&&(m-y>=d)){
                cout<<((n-1)+(m-1))<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
    }
}