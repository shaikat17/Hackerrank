Problem Link: https://www.hackerrank.com/challenges/magic-square-forming/problem

#include<bits/stdc++.h>
using namespace std;


bool is_magic_square(vector<int> v) /// to check the condition of magic square
{
    int a[3][3];

    ///convert vector into 3X3 matrix
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        a[i][j] = v[3*i+j];

    int s=0;
    ///sum of one row
    for(int i=0; i<3; i++) s += a[0][i];

    ///checking is each row sum is same

    for(int i=0; i<3; i++)
    {
        int temp=0;
        for(int j=0; j<3; j++)
        temp += a[i][j];

        if(temp!=s) return 0;
    }

    ///checking is each column sum is same
    for(int i=0; i<3; i++)
    {
        int temp=0;
        for(int j=0; j<3; j++)
        temp += a[j][i];

        if(temp!=s) return 0;
    }


    ///checking is 1st diagonal sum is same
        int temp=0;
        for(int j=0; j<3; j++)
        temp += a[j][j];

        if(temp!=s) return 0;

    ///checking is 2nd diagonal sum is same
        temp=0;
        for(int j=0; j<3; j++)
        temp += a[j][2-j];

        if(temp!=s) return 0;

        return 1;

}

void find_magic_square(vector<vector<int>> &vms) ///to find all magic square matrix
{

    vector<int> v(9);

    for(int i=0; i<9; i++) v[i] = i+1;

    do
    {
        if(is_magic_square(v)) ///is it a magic square
        {
            vms.push_back(v); ///if it then store
        }


    }
    while(next_permutation(v.begin(), v.end())); 


}

int diff(vector <int> a, vector <int> b)  ///to find the cost
{
    int ret = 0;

    for(int i=0; i<9; i++) ret += abs(a[i] - b[i]);

    return ret;
}

int mainret(vector <int> v) ///to find minimum cost
{
    int ret = INT_MAX;

    vector<vector<int>> magic_square;

    find_magic_square(magic_square);

    for(int i=0; i<magic_square.size(); i++)
    {
        ret = min(ret, diff(v, magic_square[i]));
    }

    return ret;
}

int main()
{
    vector<int> v;

    for(int i=1; i<=9; i++)
    {
        int m;
        cin>>m;
        v.push_back(m);
    }

    int res = mainret(v);

    cout<<res<<endl;

return 0;

}
