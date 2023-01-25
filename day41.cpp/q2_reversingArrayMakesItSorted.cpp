#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> v)
{
    // vector<int> t = v;
    // sort(t.begin(), t.end());
    // int n = v.size();
    // int f, b;
    // for (f = 0; f < n; f++)
    // {
    //     if (v[f] != t[f])
    //         break;
    // }
    // for (b = n - 1; b >= 0; b--)
    // {
    //     if (v[b] != t[b])
    //         break;
    // }
    // for (int i = f; i < b; i++)
    // {
    //     if (v[i] < v[i + 1])
    //         return false;
    // }
    // return true;
    int x = -1, y = -1;
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i + 1] < v[i])
        {
            if (x == -1)
                x = i;
            y = i + 1;
        }
    }
    if (x != -1)
    {
        reverse(v.begin() + x, v.begin() + y + 1);
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                return false;
                return 0;
            }
        }
    }
    return true;
}
int main()
{
    vector<int> v = {1, 2, 4, 5, 3};
    if (check(v))
        cout << "y\n";
    else
        cout << "n";

    return 0;
}