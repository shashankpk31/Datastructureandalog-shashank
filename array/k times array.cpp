// Given an array of size n and a number k, find all elements that appear more than n/k times

#include <bits/stdc++.h>
using namespace std;

void fri(int a[], int l, int r)
{
    for (int i = l; i < r; i++)
    {
        cin>> a[i];
    }
}


void solve(int a[], int n,int k)
{
    int x=n/k;
    unordered_map<int,int> S;
    for(int i = 0; i < n; i++)
    {
        S[a[i]]++;
    }
    for (auto& it : S) {
        // cout << it.first << ' ' << it.second << '\n';
        if (it.second>x)
        {
           cout<<it.first<<" ";
        }
        
    }
     
}

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    fri(a, 0, n);
    solve(a,n,k);
   
    return 0;
}