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

void fro(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cout << a[i] << " ";
    }
}

void solve(int a[], int n, int k)
{
    int b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i] - k;
        c[i] = a[i] + k;
        if (b[i] <= 0)
        {
            b[i] = c[i];
        }
    }

    int max_b, min_b, max_c, min_c;

    max_b = *max_element(b, b + n);
    min_b = *min_element(b, b + n);
    max_c = *max_element(c, c + n);
    min_c = *min_element(c, c + n);

    int d[3];

    d[0] = max_b - min_b;
    d[1] = max_c - min_c;
    d[2] = max_c - min_c;

    cout<<endl<<*min_element(d,d+3);
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    fri(a, 0, n);
    solve(a, n, k);

    return 0;
}