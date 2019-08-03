//Euclidean Algorithm used to calculate the greatest common divisor of two numbers.
//Time complexity: O(log(max(a,b))).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
t gcd(t a,t b)
{
    while(a)
        b%=a,swap(a,b);
    return b;
}
