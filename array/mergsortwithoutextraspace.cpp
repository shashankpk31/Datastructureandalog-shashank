//Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r) //input func
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void fro(int a[], int l, int r) ///output fuction
{
    for (int i = l; i < r; i++)
    {
        cout << a[i] << " ";
    }
}

void merge(int a[], int b[], int n, int m) //operaation func
{
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        if (a[i] > b[0])
        {
            flag = 1;
            swap(a[i], b[0]);
        }
        if (flag)
        {
            sort(b, b + m);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    fri(a, 0, n);
    int b[m];
    fri(b, 0, m);
    merge(a, b, n, m);
    fro(a, 0, n);
    fro(b, 0, m);
    return 0;
}