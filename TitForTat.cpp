#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        
        int n,k;
        cin>>n;
        cin>>k;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        i=0;
        while(k--){
            if(a[i]>0){
                a[i]--;
                a[n-1]++;
            }
            else{
                if(i<n-1){
                    i++;
                    k++;
                }
                else{
                    break;
                }
            }
        }

        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}