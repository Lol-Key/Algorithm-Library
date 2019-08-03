//Multiplying two matrixes a = n x m and b = m x p
//Time complexity: O(nmp)

#include <bits/stdc++.h>
using namespace std;

template<typename t>
vector<vector<t>> mtxmul(vector<vector<t>> a,vector<vector<t>> b)
{
    vector<vector<t>> ans;
    for(int i=0;i<(int)a.size();i++)
    {
        ans.emplace_back(vector<t>());
        for(int j=0;j<(int)b[0].size();j++)
        {
            ans.back().emplace_back(0);
            for(int l=0;l<(int)b.size();l++)
                ans.back().back()+=a[i][l]*b[l][j];
        }
    }
    return ans;
}
