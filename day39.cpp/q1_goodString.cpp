#include <bits/stdc++.h>
using namespace std;

// string makeGood(string s)
// {
//     if (s.size() == 1)
//     {
//         return s;
//     }
//     if (s.size() == 2)
//     {
//         if (s[1] == 32 + s[0] || s[1] == s[0] - 32)
//             return "";
//     }
//     bool end = false;
//     string res = s;
//     int i = 0;
//     while (!end)
//     {
//         if (i + 1 == res.size() - 1)
//             end = true;
//         if (i > 0 && (res[i - 1] == 32 + res[i] || res[i - 1] == res[i] - 32))
//         {
//             res.erase(i - 1, 2);
//         }

//         else if (res[i + 1] == 32 + res[i] || res[i + 1] == res[i] - 32)
//         {
//             res.erase(i, 2);
//         }

//         else
//             i++;

//     }
//     if (res.size() == 2)
//     {
//         if (res[1] == 32 + res[0] || res[1] == res[0] - 32)
//             return "";
//         else
//             return res;
//     }
//     return res;
// }
string makeGood(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (abs(s[i] - s[i + 1]) == 32)
            return makeGood(s.substr(0, i) + s.substr(i + 2));
    }

    return s;
}
int main()
{
    string s = "jeSsEJ";
    string res = makeGood(s);
    if (res.size() == 0)
        cout << "empty";
    else
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i];
        }
    }

    return 0;
}