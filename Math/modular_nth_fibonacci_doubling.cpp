//Computing the N'th element mod m in the Fibonacci sequence using one of the sequence's properties: F(n+k) = F(n)*F(k-1)+F(n+1)*F(k).
//Time complexity: O(log(n)).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
struct modfib_ans{t a,b;};

template<typename t>
modfib_ans<t> modfib(t n,t m)
{
    if(!n)
        return {0,1};
    modfib_ans<t> p=modfib(n>>1,m);
    t a=(p.a*((2*p.b-p.a+m)%m))%m;
    t b=(p.a*p.a+p.b*p.b)%m;
    if(n&1)
        return {b,(a+b)%m};
    else
        return {a,b};
}
