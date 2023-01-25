#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count[26] = {0};
    string s = "abcbba";

    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 1)
        {
            cout << count[i] << "," << char(i + 'a') << endl;
        }
    }

    return 0;
}