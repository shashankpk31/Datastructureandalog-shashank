

#include <bits/stdc++.h>
using namespace std;

struct interval
{
    int start, end;
};

bool compareInterval(interval i1, interval i2)
{
    return (i1.start < i2.start);
}

void merge(interval a[], int n) //operaation func
{
    if (n <= 0)
        return;

    stack<interval> s;

    sort(a, a + n, compareInterval);

    for (int i = 0; i < n; i++)
    {
        interval top = s.top();
        if (top.end < a[i].start)
        {
            s.push(a[i]);
        }
        else if (top.end < a[i].end)
        {
            top.end = a[i].end;
            s.pop();
            s.push(top);
        }
    }
    while (!s.empty())
    {
        interval t = s.top();
        cout << "[" << t.start << "," << t.end << "]";
        s.pop();
    }
}

int main()
{
    int n;
    cin >> n;
    interval a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].start >> a[i].end;
    }
    merge(a,n);
    return 0;
}