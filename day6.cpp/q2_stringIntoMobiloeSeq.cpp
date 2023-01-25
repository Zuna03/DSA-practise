#include <bits/stdc++.h>
using namespace std;

string stringInotMobile(string str[], int num[], int n, int m, string s)
{
    int pos = -1;
    string ans = "";
    int indexFound;

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (pos != -1)
            {
                indexFound = j - 1;
            }
            pos = str[j].find(s[i]);
        }
        for (int k = 0; k < pos; k++)
        {
            ans += num[indexFound];
        }
    }
    return ans;
}
int main()
{
    string str[8] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    int num[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    string s = "GEEKSFORGEEKS";

    cout << stringInotMobile(str, num, 8, 8, s);
    return 0;
}