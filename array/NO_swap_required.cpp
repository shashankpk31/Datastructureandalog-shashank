#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int swap_required(int a[], int n, int k)
{
    int count = 0, bad = 0, ans = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] <= k)
            ++count;

    for (int i = 0; i < count; ++i)
        if (a[i] > k)
            ++bad;

    ans = bad;
    int j;
    for (int i = 0, j = count; j < n; ++i, ++j)
        if (a[i] > k)
            --bad;
        if (a[j] > k)
            ++bad;

    ans = min(ans, bad);

    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = swap_required(a, n, k);
    cout << ans;
    return 0;
}
