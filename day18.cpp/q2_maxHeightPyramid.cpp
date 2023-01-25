#include <bits/stdc++.h>
using namespace std;

int maxLevel(int boxes[], int n)
{
    sort(boxes, boxes + n);
    int ans = 1;
    int cc = 0, cw = 0, pc = 1, pw = boxes[0];

    for (int i = 1; i < n; i++)
    {
        cw += boxes[i];
        cc += 1;
        if (cc > pc && cw > pw)
        {
            pc = cc;
            pw = cw;
            cc = 0;
            cw = 0;

            ans++;
        }
    }
    return ans;
}

int main()
{
    int boxes[] = {10, 20, 30, 50, 60, 70};
    int n = sizeof(boxes) / sizeof(boxes[0]);
    cout << maxLevel(boxes, n) << endl;

    return 0;
}