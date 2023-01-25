#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    int c = 0;
    string ans = "";
    int i = 0, j, n = s.length();
    while (i < n)
    {
        while (i < n && s[i] == ' ')
            i++;
        if (i >= n)
            break;
        j = i + 1;
        while (j < n && s[j] != ' ')
            j++;
        string res = s.substr(i, j - i);
        if (ans.length() == 0)
            ans = res;
        else
            ans = res + " " + ans;
        i = j + 1;
    }

    return ans;
}
int main()
{
    string s = "a good  ex";
    string ans = reverseWords(s);
    cout << s << endl;
    cout << ans << endl;

    return 0;
}