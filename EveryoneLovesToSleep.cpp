#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,H,M,index;
        cin>>n,H,M;
        int h[n],m[n];
        int minH=24;
        int minM=60;
        for(int i=0;i<n;i++){
            cin>>h[i]>>m[i];
            if(h[i]-H>0){
                if(h[i]-H<=minH){
                    minH=h[i];
                    if(m[i]-)
                    index=i;
                }
            }
        }
    }
}