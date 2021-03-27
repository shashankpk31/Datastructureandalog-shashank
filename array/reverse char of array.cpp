#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char a[],int start, int end)
{
    int temp;
    while (start<end)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    
}

int main()
{
    int n;
    cin>>n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    return 0;
}

