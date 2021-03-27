#include <bits/stdc++.h>
using namespace std;

void sorinser(stack<int> &s, int temp)
{
    if (s.empty() || s.top() < temp)
    {
        s.push(temp);
        return;
    }
    int top = s.top();
    s.pop();
    sorinser(s, temp);
    s.push(top);
}

void sort1(stack<int> &s)
{
    if (!s.empty())
    {
        int temp = s.top();
        s.pop();
        sort1(s);
        sorinser(s, temp);
    }
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
    cout<<endl;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(1);
    s.push(8);
    s.push(7);
    cout<<"Stack here before sorting";
    printstack(s);
    cout<<"Stack here before sorting";
    sort1(s);
    printstack(s);
    return 0;
}