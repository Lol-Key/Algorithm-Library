#include<bits/stdc++.h>
#include "matrix_exponentation.cpp"
using namespace std;

int main()
{
    vector<vector<int>> a={{0,1}},b={{0,1},{1,1}};
    a=mtxmul(a,mtxexp(b,12));
    cout<<a[0][0];
}
