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

void fro(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cout << a[i]<<" ";
    }
}

void rotateby1(int a[],int n)
{ 
    int  i,temp=a[0];
    for ( i = 0; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;

}

void rotatebyt(int a[],int t,int n)
{
    for (int i = 0; i < t; i++)
    {
        rotateby1( a, n);
    }   
}

int main()
{
    int n,t;
    cin >> n>>t;
    int a[n];
    fri(a, 0, n);
    rotatebyt(a,t,n);
    fro(a,0,n);
    return 0;
}