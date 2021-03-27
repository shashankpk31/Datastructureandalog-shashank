#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

// bool rearrange(int a[], int n)
// {
//     bool s = false;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += a[j];
//             if (sum == 0)
//             {
//                 s = true;
//                 return s;
//             }
//         }
//     }
//     return s;
// }

bool rearrange(int a[], int n)
{
    bool s = false;
    set<int> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        m.insert(sum);
        sum += a[i];
        if ( m.find(sum))
        {
            /* code */
        }
    }

    return s;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    bool s = rearrange(a, n);
    cout << s;
    return 0;
}