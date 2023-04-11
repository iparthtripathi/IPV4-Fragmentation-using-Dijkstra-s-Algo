#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << endl;
        int max;
        max = a;
        if (b >= max)
            max = b;
        if (c >= max)
            max = c;
        // if (max == 0)
        // {
        //     a = 1;
        //     b = 1;
        //     c = 1;
        // }
        // else
        // {
        //     if (a != max)
        //         a = max - a + 1;
        //     else
        //         a = 0;
        //     if (b != max)
        //         b = max - b + 1;
        //     else
        //         b = 0;
        //     if (c != max)
        //         c = max - c + 1;
        //     else
        //         c = 0;
        // }
        //     cout << a << " " << b << " " << c;
        if(a==b==c)
        {
            
        }
    }
}