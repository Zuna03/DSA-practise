#include <bits/stdc++.h>
using namespace std;

// int myCompare(string x, string y)
// {
//     string xy = x.append(y);
//     string yx = y.append(x);

//     return xy.compare(yx) > 0 ? 1 : 0;
// }

// void longest(vector<string> s)
// {
//     sort(s.begin(), s.end(), myCompare);
//     for (int i = 0; i < s.size(); i++)
//     {
//         cout << s[i];
//     }
// }

bool myCompare(int x, int y)
{
    int xy = x, yx = y;
    int countX = 0, countY = 0;
    while (x > 0)
    {
        countX++;
        x = x / 10;
    }
    while (y > 0)
    {
        countY++;
        y = y / 10;
    }
    while (countX > 0)
    {
        yx *= 10;
        countX--;
    }
    while (countY > 0)
    {
        xy *= 10;
        countY--;
    }
    yx += x;
    xy += y;

    return xy > yx;
}
void longest(vector<int> s)
{
    sort(s.begin(), s.end(), myCompare);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
}

int main()
{
    vector<int> arr;

    // Output should be 6054854654
    arr.push_back(54);
    arr.push_back(546);
    arr.push_back(548);
    arr.push_back(60);
    longest(arr);

    return 0;
}