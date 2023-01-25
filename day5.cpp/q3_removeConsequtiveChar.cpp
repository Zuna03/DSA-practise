#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string S)
{
    string s = "";
    for (int i = 0; i < S.size(); i++)
    {
        if (i < S.size()-1 && S[i] == S[i + 1])
            continue;
        else
            s += S[i];
    }
    return s;
}

int main()
{
    string S = "bcdebeaec";
    cout << removeConsecutiveCharacter(S);

    return 0;
}