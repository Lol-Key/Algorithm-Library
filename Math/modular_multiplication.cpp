//Multiplying two numbers a and b mod m.
//Time complexity: log(min(a,b)).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
t modmul(t a,t b,t m)
{
    a=(a%m+m)%m;
    b=(b%m+m)%m;
    t ans=0;
    while(b)
    {
        if(b&1)
            ans=(ans+a)%m;
        a=(a+a)%m;
        b>>=1;
    }
    return ans;
}
