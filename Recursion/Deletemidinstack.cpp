#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int key)
{
    if (key == 1)
    {
        s.pop();
        return;
    }
    int top = s.top();
    s.pop();
    solve(s, key - 1);
    s.push(top);
}

stack<int> sort_del_mid(stack<int> &s)
{

    if (s.size() == 0)
    {
        return s;
    }
    int mid = s.size() / 2 + 1;
    solve(s, mid);
    return s;
}

void printstack(stack<int> s)
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
    s.push(5);
    s.push(3);
    s.push(1);
    s.push(8);
    s.push(7);
    cout << "Stack here before sorting";
    printstack(s);
    cout << "Stack here after deletion";
    sort_del_mid(s);
    printstack(s);
    return 0;
}