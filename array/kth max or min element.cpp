#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort(int a[],int k,int start, int end)
{
    int temp;
    for (int i = start; i <= end; i++)
    {
        for(int j = i+1; j<=end; j++)  
        {  
            if(a[j] < a[i])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;   
            }   
        }   
    }
    
    cout<<a[k-1];
    
}

int main()
{
    int n,k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin>>k;
    sort(a,k,0, n - 1);
    
    return 0;
}
