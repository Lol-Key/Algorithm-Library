//Calculating a^b using binary exponentation
//Time complexity O(log(b))

#include <bits/stdc++.h>
using namespace std;

template<typename t>
t exp(t a,t b)
{
    t ans=1;
    while(b)
    {
        if(b&1)
            ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}
