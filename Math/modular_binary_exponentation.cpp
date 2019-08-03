//Calculating a^b mod m using modular exponentation.
//Time complexity: O(log(x)).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
t modexp(t a,t b,t m)
{
    a=(a%m+m)%m;
    t ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}
