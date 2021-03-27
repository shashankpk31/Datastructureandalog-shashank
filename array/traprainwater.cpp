
#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void sort012(int a[], int n)
{
    int max = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        sum = sum + max - a[i];
    }
    cout << sum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    sort012(a, n);

    return 0;
}