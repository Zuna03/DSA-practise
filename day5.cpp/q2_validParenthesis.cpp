#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<int> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty())
            st.push(s[i]);
        else if (st.top() == '{' && s[i] == '}' ||
                 st.top() == '(' && s[i] == ')' ||
                 st.top() == '[' && s[i] == ']')
            st.pop();
        else
            st.push(s[i]);
    }
    if (st.empty())
        return true;
    return false;
}

int main()
{
    string s = "{[)]}";
    if (isValid(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}