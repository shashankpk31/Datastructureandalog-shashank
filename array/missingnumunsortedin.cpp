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

int solve(int a[], int n)
{
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            b.push_back(a[i]);
        }
    }
    int ne = b.size();

    sort(b.begin(), b.end());

    int max=*max_element(a,a+n);

    for (int i = 1; i<n; i++)
    {
       if (i!=b[i])
       {
           return i;
       }
       
    }
    
    return 0;
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    int ans = solve(a, n);
    cout << ans << " ";
    return 0;
}