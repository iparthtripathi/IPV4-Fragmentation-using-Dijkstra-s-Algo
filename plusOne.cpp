
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
        int n=digits.size();

        while(n){
            if(digits[n]==9){
                digits[n]=0;
            }
            else{
                digits[n]++;
            }
            n--;
        }
        if(n==0){
            vector<int>::iterator it=digits.begin();
            digits.insert(it,1);
        }
        return digits;







    //     vector<int>::iterator it;
    //     int s=0,i=0;
    //     int n=digits.size();
    //     int k=n;
    //     while(n--){
    //         s=s+pow(10,k--)*digits.at(i++);
    //     }
    //     s++;
    //     digits.clear();
    //     int r=s%10;
    //     digits.push_back(r);
    //     s=s/10;
    //     while(s!=0){
    //         it=digits.begin();
    //         r=s%10;
    //         digits.insert(it,r);
    //         s=s/10;
    //     }
    //     return digits
    // }
};