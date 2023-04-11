#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    char a[4];
    while(t--){
        cin>>a[0]>>a[1];
        cin>>a[2]>>a[3];
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                if(a[i]==a[j]){
                    c++;
                }
            }
            }
        
        if(c==0){
            cout<<3<<"\n";
        }
        else if(c==1){
            cout<<2<<"\n";
        }
        else if(c==6){
            cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
        c=0;
    }
}
