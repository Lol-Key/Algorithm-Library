//Fermat primality test using fermat's little theorem whcih states that a^phi(n) mod n == 1 for gcd(a,n) =1
//Time complexity: O(klog(n))

#include <bits/stdc++.h>
#include "modular_binary_exponentation.cpp"
using namespace std;

template<typename t>
bool fermat_prime(t n,t k)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
    uniform_int_distribution <t>rng2(2,n-2);
    for(int i=0;i<k;i++)
    {
        if(modexp(rng2(rng),n-1,n)!=1)
            return false;
    }
    return true;
}
