
#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void threeWayPartition(int a[], int n, int c, int b)
{
    int start = 0, end = n - 1;
    for (int i = 0; i < n;)
    {
        if (a[i] < c)
        {
            swap(a[i++], a[start++]);
        }
        else if (a[i] > b)
        {
            swap(a[i], a[end--]);
        }

        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    int c, b;
    cin >> c>>b;
    threeWayPartition(a, n, c, b);

    return 0;
}