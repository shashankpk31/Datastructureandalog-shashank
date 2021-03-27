
#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void choclate_distrib(int a[], int n,int k)
{
    sort(a,a+n);
    int min_diff=INT_MAX;
    for (int i = 0; i+k-1 < n; i++)
    {
        int m=a[i+k-1]-a[i];
        if (m<min_diff)
        {
            min_diff=m;
        }
        
    }
    cout<<min_diff;
   
}

int main()
{
    int n,k;
    cin >> n>>k;
    int a[n];
    fri(a, 0, n);
    choclate_distrib(a, n,k);

    return 0;
}