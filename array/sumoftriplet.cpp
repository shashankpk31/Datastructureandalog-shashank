
#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

bool sort012(int a[], int n, int sum)
{
    sort(a, a + n);
    int l, r;
    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1;
        r = n - 1;
        while (l < r)
        {
            if (a[i] + a[l] + a[r] == sum)
            {
                cout << a[i] << "," << a[l] << "," << a[r] << endl;
                return true;
            }
            else if (a[i] + a[l] + a[r] < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}

int main()
{
    int n, sum;
    cin >> n >> sum;
    int a[n];
    fri(a, 0, n);
    if (sort012(a, n, sum))
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}