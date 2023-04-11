#include <bits/stdc++.h>
using namespace std;

int checkPrimes(int a){
    int c=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,c=0,s=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            c=0;
            for(int j=1;j<=i;j++){
                if(checkPrimes(j)){
                    c++;   
                }
            }
            if(c%2==0&&c!=0){
                s++;
            }
        }
        cout<<s<<endl;
    }
}