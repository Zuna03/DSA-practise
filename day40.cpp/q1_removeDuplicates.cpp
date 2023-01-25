#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    int i = 1;
    while (i < arr.size())
    {
        int previ = i;
        if (i < arr.size() - 1 && arr[i + 1] < arr[i])
            break;
        else if (arr[i] == arr[i - 1])
        {
            int temp = arr[i];
            for (int j = i; j < arr.size() - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
            arr[arr.size() - 1] = temp;
        }
        else
            i++;
    }
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        count++;
        if (i<arr.size()-1 && arr[i + 1] < arr[i])
            break;
    }
    return count;
}
int main()
{
    vector<int> arr = {1};
    int k = removeDuplicates(arr);
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}