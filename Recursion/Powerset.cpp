#include <bits/stdc++.h>
using namespace std;

void Powerser(string str, int index = 0, string curr = "")
{
    int n = str.length();

    if (index == n)
    {
        cout << curr << endl;
        return;
    }
    Powerser(str, index + 1, curr + str[index]);
    Powerser(str, index + 1, curr);
}

int main()
{
    string str = "12345";
    Powerser(str);
    return 0;
}