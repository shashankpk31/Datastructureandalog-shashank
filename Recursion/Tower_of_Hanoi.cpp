#include <bits/stdc++.h>
using namespace std;

void Stepsfortower(int n, char From, char To, char Help)
{
    if (n == 1)
    {
        cout << " Move the disk  " << n << " from rod " << From << " to the rod " << To << endl;
        return;
    }
    Stepsfortower(n - 1, From, Help, To);
    cout << "Move the disk " << n << " from rod " << From << " to the rod " << To << endl;
    Stepsfortower(n - 1, Help, To, From);
}

int main()
{
    int N;
    cin>>N;
    char From='A', Help='B', To='C';
    Stepsfortower(N,From,Help,To);
    return 0;
}