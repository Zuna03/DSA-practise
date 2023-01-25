#include <bits/stdc++.h>
using namespace std;

vector<int> repeatedNumber(vector<int> A)
{
    sort(A.begin(), A.end());
    vector<int> ans;
    for (int i = 0; i < A.size() - 1; i++)
    {
        if (A[i] == A[i + 1] || A[i + 1] - A[i] > 1)
        {

            if (A[i + 1] - A[i] > 1)
                ans.push_back((A[i] + A[i + 1]) / 2);
            else
                ans.push_back(A[i]);
        }

        if (A[i + 1] - A[i] > 1)
            ans.push_back((A[i] + A[i + 1]) / 2);
    }
    return ans;
}

int main()
{
    vector<int> num = {3, 2, 1};
    vector<int> ans = repeatedNumber(num);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}