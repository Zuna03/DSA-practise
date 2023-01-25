#include <bits/stdc++.h>
using namespace std;
#define n 255

void countSort(char arr[])
{

    int helpArr[n + 1];
    memset(helpArr, 0, sizeof(helpArr));
    for (int i = 0; arr[i]; ++i)
    {
        ++helpArr[arr[i]];
    }
    for (int i = 1; i <= n; ++i)
    {
        helpArr[i] += helpArr[i - 1];
    }
    char output[strlen(arr)];

    for (int i = 0; arr[i]; ++i)
    {
        output[helpArr[arr[i]] - 1] = arr[i];
        --helpArr[(arr[i])];
    }
    for (int i = 0; arr[i]; ++i)
        arr[i] = output[i];
}
int main()
{
    char arr[] = "geeksforgeeks";

    countSort(arr);
    cout << arr;

    return 0;
}