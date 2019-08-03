//Extended Euclidean Algorithm used to solve the equation ax+by=gcd(a,b).
//Time complexity: O(log(max(a,b))).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
struct egcd_ans{t g,x,y;};

template<typename t>
egcd_ans<t> egcd(t a,t b)
{
    if(!a)
        return {b,0,1};
    auto s=egcd(b%a,a);
    return {s.g,s.y-(b/a)*s.x,s.x};
}
