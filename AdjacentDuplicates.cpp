#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        vector<string> str=s;
        vector<string>::iterator it=s.begin();
        for(int i=0;i<n-1;i++){
            if(str[i]==str[i++]){
                str.erase(it+i);
                str.erase(it+i+1);
                s.
                i=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<s[i];
        }
    }
};