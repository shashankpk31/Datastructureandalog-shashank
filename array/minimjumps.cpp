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

int min(int x, int y)
{
    return x < y ? x : y;
}
int solve(int a[], int n)
{
    int *jumps = new int[n];
    int i, j;

    if (n == 0 || a[0] == 0)
        return INT_MAX;

    jumps[0] = 0;

    for (i = 1; i < n; i++)
    {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++)
        {
            if (i <=a[j]+j && jumps[j]!=INT_MAX)
            {
                jumps[i] = min(jumps[i], jumps[i] + 1);
            }
        }
    }
    return jumps[n - 1];
}

int main()
{
    int n, steps = 0;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    steps = solve(a, n);
    cout << steps;
    return 0;
}