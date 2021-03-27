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

void duplicate(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout << a[i]<<" ";
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    duplicate(a, n);
   
    return 0;
}