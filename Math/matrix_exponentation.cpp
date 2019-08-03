//Raising matrix a = n x n to the b'th power with binary exponentation
//Time complexity: O(n^3)

#include <bits/stdc++.h>
#include "matrix_multiplication.cpp"
using namespace std;

template<typename t>
vector<vector<t>> mtxexp(vector<vector<t>> a,t b)
{
    vector<vector<t>> ans;
    for(int i=0;i<(int)a.size();i++)
    {
        ans.emplace_back(vector<t>());
        for(int j=0;j<(int)a.size();j++)
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
            ans=mtxmul(ans,a);
        a=mtxmul(a,a);
        b>>=1;
    }
    return ans;
}
