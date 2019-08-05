//Sieve of Eratosthenes for computing primes in range (1,n] and prime factorization table. Optimized to be faster than standard nloglogn.
//Time complexity: O(nlog(log(sqrt(n))))

#include <bits/stdc++.h>
using namespace std;

template<typename t>
vector<t> eratosthenes_sieve(t n)
{
    vector<t> ans;
    ans.reserve(n+1);
    ans[0]=0;
    ans[1]=0;
    for(int i=3;i<=n;i+=2)
        ans[i]=i;
    for(int i=2;i<=n;i+=2)
        ans[i]=2;
    for(int i=3;i*i<=n;i+=2)
        for(int j=i;j<=n;j+=i)
            ans[j]=min(ans[j],i);
    return ans;
}

