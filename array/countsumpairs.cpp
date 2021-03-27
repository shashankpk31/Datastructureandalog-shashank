
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
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((a[i] + a[j]) == k)
            {
                flag++;
            }
        }
    }
    cout << flag;
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