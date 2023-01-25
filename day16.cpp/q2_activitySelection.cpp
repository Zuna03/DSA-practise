#include <bits/stdc++.h>
using namespace std;

int activitySelection(vector<int> start, vector<int> finish, int n)
{
    int i, j;

    sort(finish.begin(), finish.end());
    i = 0;
    int count = 1;

    for (j = 1; j < n; j++)
    {
        cout << start[j] << " " << finish[i] << endl;

        if (start[j] >= finish[i])
        {
            count++;
            i = j;
        }
    }
    return count;
}
int main()
{
    vector<int> start = {5, 1, 3, 0, 5, 8};
    vector<int> end = {9, 2, 4, 6, 7, 9};

    cout << activitySelection(start, end, 6);
    cout << "--------------------\n";

    return 0;
}