
#include <bits\stdc++.h>
#include <algorithm>

using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void solve(int a[], int n)
{
    sort(a, a + n);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if ((a[i]+1)==a[i+1])
        {
          flag++;
        }   
        else if ((a[i]+1)!=a[i+1])
        {
            break;
        }
        
    }
    cout<<flag;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    solve(a, n);
    
    return 0;
}