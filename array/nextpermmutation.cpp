
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

void nextpermute(int a[], int n)
{
    int i = n - 1;
    while (i > 0 && a[i - 1] >= a[i])

        i--;
    if(n<=0)
    {
        cout<<"this is last permutation";
    }    
    int j;
    j=n-1;
    while (a[j]<=a[j-1])
        j--;

    int temp;
    temp=a[i-1];
    a[i-1]=a[j];
    a[j]=temp;     
    
    j=n-1;
    while (i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    fri(a, 0, n);
    nextpermute(a, n);
    
    return 0;
}