
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;
    unordered_map<int,int> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
       if (a[i]==(k-a[i]))
       {
           ans+=m[a[i]]--;
       }
       else
       {
           ans+=m[k-a[i]];
       }   
    }
    ans/=2;
    cout<<ans;


    return 0;
}