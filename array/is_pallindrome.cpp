#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int is_pallinderome(int a[], int n)
{

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        int rev = 0,q=a[i];
        while (q > 0)
        {
            rev = rev * 10 + q % 10;
            q = q / 10;
        }
        cout<<rev;
        // if (rev == a[i])
        // {
        //     flag++;
        // }
    }
    // cout<<flag;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int ans = is_pallinderome(a, n);
    // cout << ans;
    return 0;
}
