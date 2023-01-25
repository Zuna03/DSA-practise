#include <bits/stdc++.h>
using namespace std;

int isStackPermutation(int N, vector<int> &A, vector<int> &B)
{
    stack<int> st;
    int x = 0;
    do
    {
        for (int i = 0; i < A.size(); i++)
        {
            while (st.top() == B[x])
            {
                x++;
                st.pop();
            }
            st.push(A[i]);
        }

    } while (!st.empty());
    if (x == B.size() - 1 && st.empty())
        return 1;

    return 0;
}
int main()
{
    int N = 3;
    vector<int> A = {1, 2, 3};
    vector<int> B = {2, 1, 3};

    cout << isStackPermutation(N, A, B);

    return 0;
}