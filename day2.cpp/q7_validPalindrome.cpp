#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string str = " ";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
            str += s[i];
        else if (isdigit(s[i]))
            str += s[i];
    }
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int low = 1, high = str.size() - 1;
    while (low <= high)
    {
        if (str[low] != str[high])
            return false;

        low++;
        high--;
    }
    return true;
}
int main()
{
    string s = "0p";
    if (isPalindrome(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}