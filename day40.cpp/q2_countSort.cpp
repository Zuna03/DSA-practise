#include <bits/stdc++.h>
using namespace std;

void countSort(vector<int> &v)
{
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    int range = max - min + 1;
    vector<int> count(range), output(v.size());
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        count[v[i] - min]++;
    }
    for (int i = 1; i < n; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        output[count[v[i] - min] - 1] = v[i];
        count[v[i] - min]--;
    }
    for (int i = 0; i < n; i++)
    {
        v[i] = output[i];
    }
}
void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    vector<int> arr = {-5, -10, 0, -3, 8, 5, -1, 10};
    countSort(arr);
    printArray(arr);

    return 0;
}