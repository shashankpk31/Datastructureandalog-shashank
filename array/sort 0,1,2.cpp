
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
        cout << a[i]<<" ";
    }
}

void sort012(int a[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            c0++;
        }
        else if (a[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for (int i = 0; i < c0; i++)
    {
        a[i]=0;
    }
    for (int i = c0; i < c0+c1; i++)
    {
        a[i]=1;
    }
    for (int i =c0+c1; i < n; i++)
    {
        a[i]=2;
    }
    
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    sort012(a,n);
    fro(a,0,n);
    return 0;
}