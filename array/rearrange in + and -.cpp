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

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void rearrange(int a[], int n)
{
    int i = -1, j = n;

    while (i < j)
    {
        while (i <= n && a[i] > 0)
        {
            i += 1;
        }
        while (j >= 0 && a[j] < 0)
        {
            j -= 1;
        }
        if (i < j)
            swap(a[i], a[j]);
    }
    if (i == 0 || i == n)
        return;
    int k = 0;
    while (k < n && i < n)
    {
        swap(a[k], a[i]);
        k = k + 2;
        i = i + 1;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    rearrange(a, n);
    fro(a,0,n);
    
    return 0;
}