// #include <bits/stdc++.h>
// using namespace std;

// vector<pair<int, int>> mergeInterval(vector<pair<int, int>> v)
// {
//     sort(v.begin(), v.end());
//     vector<pair<int, int>> res;
//     res.push_back(v[0]);
//     for (int i = 1; i < v.size() ; i++)
//     {
//         if (v[i - 1].second <= v[i].first)
//         {
//             if (res[i - 1] != v[i])
//                 res.push_back(v[i]);
//             else
//                 continue;
//         }
//     }
//     return res;
// }
// int main()
// {
//     vector<pair<int, int>> arr= {{6,8},{1,9},{2,4},{4,7}};
//     vector<pair<int, int>> res = mergeInterval(arr);

//     for (int i = 0; i < res.size(); i++)
//     {
//         cout << res[i].first << " "
//              << res[i].second << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct interval
{
    int start, end;
};
bool compare(interval i1, interval i2)
{
    return i1.start < i2.start;
}
void mergeInterval(interval arr[], int n)
{
    stack<interval> s;
    sort(arr, arr + n, compare);

    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        interval top = s.top();
        if (top.end < arr[i].start)
            s.push(arr[i]);
        else if (top.end < arr[i].end)
        {
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
    cout << "\n The Merged Intervals are: ";
    while (!s.empty())
    {
        interval t = s.top();
        cout << "[" << t.start << "," << t.end << "] ";
        s.pop();
    }
    return;
}
int main()
{
    interval arr[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeInterval(arr, n);

    return 0;
}