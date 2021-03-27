// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

#define max 500 


int multiply(int a[],int asize,int x);

void factorial(int n)
{
    int a[max];
    a[0]=1;
    int asize=1;
    for(int i=2;i<n;i++)
    {
        asize=multiply(a,asize,i);
    }
    for(int i=asize-1;i>=0;i--)
    {
        cout<<a[i];
    }
    
}

int multiply(int a[],int asize,int x)
{
    int carry=0;
    for(int i=0;i<asize;i++)
    {
        int prod=a[i]*x+carry;
        a[i]=prod%10;
        carry=prod/10;
    }
    while(carry)
    {
        a[asize]=carry%10;
        carry=carry/10;
        asize++;
    }
    return asize;
}

int main() {
     int n;
     cin>>n;
    factorial(n);

    return 0;
}