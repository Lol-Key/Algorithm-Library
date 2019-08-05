//Raising matrix a = n x n to the b'th mod m power with binary exponentation
//Time complexity: O(n^3log(n))

#include <bits/stdc++.h>
#include "modular_matrix_multiplication.cpp"
using namespace std;

template<typename t>
vector<vector<t>> modmtxexp(vector<vector<t>> a,t b,t m)
{
    vector<vector<t>> ans;
    for(t i=0;i<(t)a.size();i++)
    {
        ans.emplace_back(vector<t>());
        for(t j=0;j<(t)a.size();j++)
        {
            if(i==j)
                ans.back().emplace_back(1);
            else
                ans.back().emplace_back(0);
        }
    }
    while(b)
    {
        if(b&1)
            ans=modmtxmul(ans,a,m);
        a=modmtxmul(a,a,m);
        b>>=1;
    }
    return ans;
}

