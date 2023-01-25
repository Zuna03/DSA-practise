#include <bits/stdc++.h>
using namespace std;

int mergeOp(int arr[], int n)
{
   int count = 0, sum = 0;
   int l = 0, r = n - 1;
   while (l < r)
   {
      if (arr[l] == arr[r])
      {
         l++;
         r--;
      }
      // else
      // {
      //    arr[l + 1] = arr[l] + arr[l + 1];
      //    l++;
      //    count++;
      // }
      else if (arr[l] > arr[r])
      {
         r--;
         arr[r] += arr[r + 1];
         count++;
      }
      else
      {
         l++;
         arr[l] += arr[l - 1];
         count++;
      }
   }
   return count;
}
int main()
{
   int arr[] = {11, 14, 15, 99};
   int count = mergeOp(arr, 4);
   cout << count;

   return 0;
}