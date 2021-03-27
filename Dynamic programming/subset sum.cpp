#include <bits/stdc++.h>
using namespace std;

bool is_subset_sum(int a[], int n, int sum)
{
    bool subset[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        subset[i][0] = true;
    }
    for (int i = 1; i <= sum; i++)
    {
        subset[0][i] = false;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; i <= sum; j++)
        {
            if (j < a[i - 1])
            {
                subset[i][j] = subset[i - 1][j];
            }
            if (j >= a[i - 1])
            {
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - a[i - 1]];
            }
        }
    }
}

// bool is_subset_sum(int a[], int n, int sum)
// {
//     if (sum == 0)
//         return true;
//     if (n == 0)
//         return false;
//     if (a[n - 1] < sum)
//         return is_subset_sum(a, n - 1, sum) || is_subset_sum(a, n - 1, sum - a[n - 1]);
//     else
//         return is_subset_sum(a, n - 1, sum);
// }

int main()
{
    int n, sum;
    cin >> n, sum;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (is_subset_sum(a, n, sum))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}