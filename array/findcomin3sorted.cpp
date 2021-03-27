
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

void solve(int a[], int b[], int c[], int n, int m, int p)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < m && k < p)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n], b[m], c[p];
    fri(a, 0, n);
    fri(b, 0, m);
    fri(c, 0, p);
    solve(a, b, c, n, m, p);

    return 0;
}