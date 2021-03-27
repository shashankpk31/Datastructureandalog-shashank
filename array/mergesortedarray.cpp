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

void merge(int a[], int b[], int n, int m)
{
    int i = 0, k = 0, index = 0, j = 0;
    int temp[n + m];
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            temp[index] = a[i];
            i = i + 1;
        }
        else
        {
            temp[index] = b[j];
            j = j + 1;
        }
        index++;
    }
    if (i > n - 1)
    {
        while (j < m)
        {
            temp[index] = b[j];
            index++;
            j++;
        }
    }
    else
    {
        while (i < n)
        {
            temp[index] = a[i];
            index++;
            i++;
        }
    }
    for (int i = 0; i < m+n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
}

int main()
{
    int n,m;
    cin >> n>>m;
    int a[n];
    fri(a, 0, n);
    int b[m];
    fri(b, 0, m);
    merge(a, b, n, m);
    
    return 0;
}