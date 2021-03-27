// Given an array of size n and a number k, find all elements that appear more than n/k times

#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    int p1 = 0, p2 = 0, b1 = INT_MAX, b2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        b1 = min(b1, a[i]);
        p1 = max(p1, a[i] - b1);
        b2 = min(b2, a[i] - p1);
        p2 = max(p2, a[i] - b2);
    }
    cout << p2;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    solve(a, n);

    return 0;
}