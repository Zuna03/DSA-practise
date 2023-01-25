#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    int n = strs.size();
    string ans = "";
    int count = 0;
    int minLength = INT_MAX, length;
    string smallestString = "";

    for (int i = 0; i < n; i++)
    {
        length = strs[i].size();
        if (length < minLength)
        {
            minLength = length;
            smallestString = strs[i];
        }
    }
    for (int i = 0; i < smallestString.size(); i++)
    {
        for (int j = 0; j < strs.size(); j++)
        {
            if (smallestString[i] != strs[j][i])
            {
                return smallestString.substr(0, count);
            }
        }
        count++;
    }
    return smallestString.substr(0, count);
}

int main()
{
    vector<string> strs = {"dog","racecar","car"};
    cout << longestCommonPrefix(strs);

    return 0;
}