#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>> res;
    unordered_map<string, vector<string>> myMap;
    string temp;
    for (int i = 0; i < strs.size(); i++)
    {
        temp = strs[i];
        sort(strs[i].begin(), strs[i].end());
        myMap[strs[i]].push_back(temp);
    }
    for (auto itr = myMap.begin(); itr != myMap.end(); ++itr)
    {
        res.push_back(itr->second);
    }
    return res;
}
int main()
{

    return 0;
}