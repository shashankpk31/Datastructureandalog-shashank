//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

int partitionposandneg(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (i != j)
                swap(a[i], a[j]);
            j++;
        }
    }
    return j;
}

int solve(int a[], int n)
{
    int flag = 0;
    int shift = partitionposandneg(a, n);
    int max = *max_element(a, a + n);
    for (int i = 1; i <= max; i++)
    {
        for (int j = shift; j <= n; j++)
        {
            if (i == a[j])
            {
                flag++;
            }
        }

        if (i != flag)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    int ans = solve(a, n);
    cout << ans << " ";
    return 0;
}