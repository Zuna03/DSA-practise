#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    vector<int> res;
    int prev1, prev2, prev3;
    prev1 = prev2 = prev3 = INT_MIN;

    while (i < n1 && j < n2 && k < n3)
    {
        while (A[i] == prev1 && i < n1)
            i++;
        while (B[j] == prev2 && i < n2)
            j++;
        while (C[k] == prev3 && i < n3)
            k++;

        if (A[i] == B[j] && A[i] == C[k])
        {
            res.push_back(A[i]);
            prev1 = A[i];
            prev2 = B[j];
            prev3 = C[k];
            i++;
            j++;
            k++;
        }

        if (A[i] < B[j])
            prev1 = A[i++];
        else if (B[j] < C[k])
            prev2 = B[j++];
        else
            prev3 = C[k++];
    }
    return res;
}

int main()
{

    int A[] = {1, 5, 10, 20, 40, 80, 80};
    int n1 = sizeof(A) / sizeof(A[0]);
    int B[] = {6, 7, 20, 80, 80, 100};
    int n2 = sizeof(B) / sizeof(B[0]);
    int C[] = {3, 4, 15, 20, 30, 70, 80, 80, 120};
    int n3 = sizeof(C) / sizeof(C[0]);

    vector<int> res = commonElements(A, B, C, n1, n2, n3);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}