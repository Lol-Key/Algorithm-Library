//Multiplying two matrixes mod m a = n x m and b = m x p
//Time complexity: O(nmp)

#include <bits/stdc++.h>
using namespace std;

template<typename t>
vector<vector<t>> modmtxmul(vector<vector<t>> a,vector<vector<t>> b,t m)
{
    vector<vector<t>> ans;
    for(t i=0;i<(t)a.size();i++)
        for(t j=0;j<(t)a[i].size();j++)
            a[i][j]=(a[i][j]%m+m)%m;
    for(t i=0;i<(t)b.size();i++)
        for(t j=0;j<(t)b[i].size();j++)
            b[i][j]=(b[i][j]%m+m)%m;
    for(t i=0;i<(t)a.size();i++)
    {
        ans.emplace_back(vector<t>());
        for(t j=0;j<(t)b[0].size();j++)
        {
            ans.back().emplace_back(0);
            for(t l=0;l<(t)b.size();l++)
                ans.back().back()=(ans.back().back()+a[i][l]*b[l][j])%m;
        }
    }
    return ans;
}
