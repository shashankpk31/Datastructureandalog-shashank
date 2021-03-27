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

int contiguous(int a[], int n)
{
    int max =0, maxsofar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max = max + a[i];
        if (maxsofar < max)
        {
            maxsofar = max;
        }
        if (max < 0) 
            {max= 0;}
             
    }
    return maxsofar;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    int max;
    max=contiguous(a, n);
    cout<<max;
    return 0;
}