#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p=0;
        cin>>n;
        string c[n];
        int d[n],u[n];
        for(int i=0;i<n;i++){
            cin>>c[i]>>d[i]>>u[i];
        }
        string minC="";
        int minD=0,minCIndex,minDIndex;
        int c1[n],d1[n];
        for(int i=0;i<n-1;i++){
            minC=c[i];
            minCIndex=i;
            minD=d[i];
            minDIndex=i;
            for(int j=i;j<n;j++){
                if(c[j]<=minC){
                    if(c[j]==minC){
                        if(u[i]>u[j]){
                            minC=c[j];
                            minCIndex=j;
                        }
                    }
                    else{
                        minC=c[j];
                        minCIndex=j;
                    }
                }
                if(d[j]<=minD){
                    if(d[j]==minD){
                       if(u[i]>u[j]){
                            minD=d[j];
                            minDIndex=j;
                        } 
                    }
                    else{
                        minD=d[j];
                        minDIndex=j;
                    }
                }
            }
            c1[i]=u[minCIndex];
            d1[i]=u[minDIndex];
        }
        for(int i=0;i<n;i++){
            if(c1[i]==d1[i]){
                p++;
            }
        }
        cout<<p<<"\n";
    }
}