//Computing the N'th element in the Fibonacci sequence using one of the sequence's properties: F(n+k) = F(n)*F(k-1)+F(n+1)*F(k).
//Time complexity: O(log(n)).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
struct fib_ans{t a,b;};

template<typename t>
fib_ans<t> fib(t n)
{
    if(!n)
        return {0,1};
    fib_ans<t> p=fib(n>>1);
    t a=p.a*(2*p.b-p.a);
    t b=p.a*p.a+p.b*p.b;
    if(n&1)
        return {b,a+b};
    else
        return {a,b};
}
