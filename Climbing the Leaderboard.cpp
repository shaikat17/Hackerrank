Problem Link: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int m;
    cin>>m;

    vector<int> vec;
    for(int i=0; i<m; i++)
    {
        int pb;
        cin>>pb;
        vec.push_back(pb);
    }

    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    int mm;
    cin>>mm;

    vector<int> avec;

    for(int i=0; i<mm; i++)
    {
        int pb;
        cin>>pb;
        avec.push_back(pb);

    }

    sort(vec.begin(), vec.end());

    int sz = vec.size();

    for(int i=0; i<avec.size(); i++)
    {
        cout<<abs(sz-(upper_bound(vec.begin(), vec.end(), avec[i])
            - vec.begin()))+1<<endl;
    }
///sort(vec.begin(), vec.end());
/// cout<<upper_bound(vec.begin(), vec.end(), 50)
///             - vec.begin();

    return 0;
}
