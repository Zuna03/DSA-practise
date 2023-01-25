#include <bits/stdc++.h>
using namespace std;

// int findMajority(int *a, int size)
// {
//     int maj_idx = 0, count = 1;
//     for (int i = 1; i < size; i++)
//     {
//         if (a[maj_idx] == a[i])
//             count++;
//         else
//         {
//             count--;
//             if (count == 0)
//             {
//                 maj_idx = i;
//                 count = 0;
//             }
//         }
//     }
//     return a[maj_idx];
// }
// bool isMajor(int *arr, int size, int cand)
// {
//     int count = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == cand)
//             count++;
//         if (count > size / 2)
//             return true;
//     }
//     return false;
// }
// void printMajority(int *a, int size)
// {
//     int cand = findMajority(a, size);
//     if (isMajor(a, size, cand))
//         cout << "yes" << endl;
//     else
//         cout << "no" << endl;
// }

// int printMajority(int *arr, int size)
// {
//     if (size == 1)
//         return arr[0];

//     int count = 1;
//     sort(arr, arr + size);
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i - 1] == arr[i])
//             count++;
//         else
//         {
//             if (count > size / 2)
//                 return arr[i - 1];
//             else
//                 size = 1;
//         }
//     }
//     return -1;
// }

void printMajority(int *arr, int size)
{
    unordered_map<int, int> m;
    for (int i = 0; i < size; i++)
    {
        m[arr[i]]++;
    }
    int count = 0;

    for (auto i : m)
    {
        if (i.second > size / 2)
        {
            count = 1;
            cout << i.first << endl;
        }
    }
    if (count == 0)
        cout << "not found\n";
}
int main()
{
    int a[] = {1, 3, 3, 1, 2};
    int size = (sizeof(a)) / sizeof(a[0]);

    // Function calling
    printMajority(a, size);

    return 0;
}