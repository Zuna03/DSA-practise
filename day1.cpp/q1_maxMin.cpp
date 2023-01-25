// // #include <bits/stdc++.h>

// // using namespace std;

// // int main()
// // {
// //   int n;
// //   cin >> n;
// //   int arr[n];
// //   int minNum = INT_MAX, maxNum = INT_MIN;
// //   cout << "Enter elements of array\n";
// //   for (int i = 0; i < n; i++)
// //   {
// //     cin >> arr[i];
// //     minNum = min(minNum, arr[i]);
// //     maxNum = max(maxNum, arr[i]);
// //   }
// //   cout << "min : " << minNum << " max : " << maxNum << endl;

// //   return 0;
// // }

// // SIMPLE LINEAR SEARCH

// #include <bits/stdc++.h>

// using namespace std;

// struct Pair
// {
//   int max, min;
// };

// Pair findMinMax(int n, int arr[])
// {
//   Pair minMax;
//   int i;

//   if (n == 1)
//   {
//     minMax.max = arr[0];
//     minMax.min = arr[0];

//     return minMax;
//   }
//   if (arr[0] > arr[1])
//   {
//     minMax.max = arr[0];
//     minMax.min = arr[1];
//   }
//   else
//   {
//     minMax.max = arr[1];
//     minMax.min = arr[0];
//   }

//   for (i = 2; i < n; i++)
//   {
//     if (arr[i] > minMax.max)
//     {
//       minMax.max = arr[i];
//     }
//     if (arr[i] < minMax.min)
//     {
//       minMax.min = arr[i];
//     }
//   }
//   return minMax;
// }

// int main()
// {
//   Pair minMax;
//   int arr[] = {1000, 11, 445, 1, 330, 3000};
//   minMax = findMinMax(6, arr);
//   cout << "MAX : " << minMax.max << endl
//        << "MIN : " << minMax.min;

//   return 0;
// }

//  Compare in pairs

#include <bits/stdc++.h>

using namespace std;

struct Pair
{
  int max, min;
};

Pair findMinMax(int n, int arr[])
{
  int i;
  Pair minMax;

  if (n % 2 == 0)
  {
    if (arr[0] > arr[i])
    {
      minMax.max = arr[0];
      minMax.min = arr[1];
    }
    else
    {
      minMax.max = arr[1];
      minMax.min = arr[0];
    }
    i = 2;
  }
  else
  {
    minMax.max = arr[0];
    minMax.min = arr[0];

    i = 1;
  }
  while (i < n - 1)
  {
    if (arr[i] > arr[i + 1])
    {
      if (arr[i] > minMax.max)
        minMax.max = arr[i];
      if (arr[i + 1] < minMax.min)
        minMax.min = arr[i + 1];
    }
    else
    {
      if (arr[i + 1] > minMax.max)
        minMax.max = arr[i + 1];
      if (arr[i] < minMax.min)
        minMax.min = arr[i];
    }
    i += 2;
  }
  return minMax;
}

int main()
{
  Pair minMax;
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  minMax = findMinMax(6, arr);
  cout << "MAX : " << minMax.max << endl
       << "MIN : " << minMax.min;

  return 0;
}