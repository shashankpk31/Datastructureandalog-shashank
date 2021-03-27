
#include <iostream>

using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

int solve(int a[], int n)
{
    int ma = a[0], mi = a[0], prod = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < 0)
        {
            swap(ma, mi);
        }
        ma = max(a[i], ma * a[i]);
        mi = min(a[i], mi * a[i]);

        if (ma > prod)
        {
            prod = ma;
        }
    }
    return prod;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    int ans = solve(a, n);
    cout << ans;
    return 0;
}