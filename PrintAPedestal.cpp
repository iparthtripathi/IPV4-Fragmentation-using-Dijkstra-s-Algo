#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        double n;
        cin>>n;
        int a=ceil(n/3);
        int b=a+1;
        int c=n-(a+b);
        if(c==0)
        {
            c++;
            a--;
        }
        cout<<a<<" "<<b<<" "<<c;
    }
    return 0;
}