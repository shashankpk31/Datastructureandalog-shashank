#include <bits/stdc++.h>
using namespace std;

void insertio(stack<int> &s, int elm)
{
    if (s.size() == 0)
    {
        s.push(elm);
        return;
    }
    else
    {
        int temp = s.top();
        s.pop();
        insertio(s, elm);
        s.push(temp);
    }
}
void reverse1(stack<int> &s)
{
    if (!s.empty())
    {
        int temp = s.top();
        s.pop();
        reverse1(s);
        insertio(s, temp);
        return;
    }
}

void printL(stack<int> s)
{
    int n = s.size();
    while (n != 0)
    {
        cout << s.top() << " ";
        s.pop();
        n--;
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(9);
    s.push(3);
    s.push(5);
    s.push(7);
    printL(s);
    reverse1(s);
    printL(s);
    return 0;
}