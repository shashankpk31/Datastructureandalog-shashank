#include <bits/stdc++.h>
using namespace std;

int solve(int N, int k)
{
    if (N == 0)
    {
        return 0;
    }
    if (k%2==0)
    {
        return solve(N - 1, k/2)==0?1:0;
    }
    return solve(N - 1, (k+1)/2);
}

int main()
{
    int N,K;
    cin>>N>>K;
    cout<<solve(N,K);
    cout<<endl;

    return 0;
}