#include <bits/stdc++.h>
using namespace std;

int set_bit(int n, int pos)
{
    int mask = 1 << pos;
    return n | mask;
}

int Get_Bit(int n, int pos)
{
    return (n & (1 << pos) != 0);
}

int clear_bit(int n, int pos)
{
    int mask = 1 << pos;
    int calc = ~mask;
    return (n & calc);
}

int update(int n, int pos, int val)
{
    n = clear_bit(n, pos);
    int mask = val << pos;
    return n | mask;
}

int main()
{
    int n=0110;
    cout<<set_bit(n,2)<<endl;
     n=0110;
    cout<<Get_Bit(n,2)<<endl;
    n=0110;
    cout<<update(n,2,1)<<endl;
     n=0110;
    cout<<clear_bit(n,2)<<endl;

    return 0;
}