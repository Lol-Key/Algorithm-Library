//Linear sieve used to calculate factorization table and multiplicative functions for [1,n].
//Time complexity:O(n).

#include <bits/stdc++.h>
using namespace std;

template<typename t>
vector<t> sieve(t n)
{
    vector<t> ans,p;
    ans.reserve(n+1);
    ans[0]=0;
    ans[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(!ans[i])
            ans[i]=i,p.emplace_back(i);
        for(int j=0;j<p.size();j++)
        {
            if(i*p[j]>n)
                break;
            ans[i*p[j]]=p[j];
            if(!(i%p[j]))
                break;
        }
    }
    return ans;
}
