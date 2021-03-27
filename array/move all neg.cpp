//Move all negative numbers to beginning and positive to end with constant extra space

#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin >> a[i];
    }
}

void fro(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cout << a[i] << " ";
    }
}

void move(int a[], int n)
{
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
           if (i!=j)
           {
               swap(a[i],a[j]);
           }
           j++;
        }
        
    }
    
    
}



int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    move(a, n);
    fro(a, 0, n);
    return 0;
}