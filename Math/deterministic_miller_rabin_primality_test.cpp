//Miller Rabin primality test
//Time complexity: O(klog(n))

#include <bits/stdc++.h>
#include "modular_binary_exponentation.cpp"
using namespace std;

template<typename t>
bool composite_miller_rabin(t x,t d,t s,t n)
{
    x=modexp(x,d,n);
    if(x==1||x==n-1)
        return false;
    for(t r=1;r<s;r++)
    {
        x=(x*x)%n;
        if(x==n-1)
            return false;
    }
    return true;
}

template<typename t>
bool prime(t n,vector<t> v)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(!(n&1))
        return false;
    t s=0,d=n-1;
    while(!(d&1))
        d>>=1,s++;
    for(t i=0;i<k;i++)
        if(composite_miller_rabin(rng2(rng),d,s,n))
            return false;
    return true;
}
