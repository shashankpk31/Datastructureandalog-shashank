
#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}



void max_profit(int a[], int n)
{
    int min_p=INT_MAX,max_profit=0;
    for (int i = 0; i < n; i++)
    { 
        min_p=min(min_p,a[i]);
        max_profit=max(max_profit,a[i]-min_p);
    }
    cout<<max_profit<<endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    max_profit(a,n);
    
    return 0;
}