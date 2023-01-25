#include <bits/stdc++.h>
using namespace std;

long long int minSum(int arr[], int n)
{
    // Your code goes here
    if (n == 1)
        return arr[0];
    sort(arr, arr + n);
    string num1 = "", num2 = "";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            num1 += to_string(arr[i]);
            if (arr[i] == 0 && num1.length() == 0)
                continue;
        }
        else
        {
            num2 += to_string(arr[i]);
            if (arr[i] == 0 && num2.length() == 0)
                continue;
        }
    }

    return stoi(num1) + stoi(num2);
}

int main()
{
    int arr[] = {0};
    cout << minSum(arr, 1);

    return 0;
}