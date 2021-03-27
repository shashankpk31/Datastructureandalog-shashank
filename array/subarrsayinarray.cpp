#include <bits/stdc++.h> 
using namespace std; 
  
// Function to check if an array is 
// subarray of another array 
bool isSubArray(int A[], int B[], int n, int m) 
{ 
    // Two pointers to traverse the arrays 
    int i = 0, j = 0; 
  
    // Traverse both arrays simultaneously 
    while (i < n && j < m) { 
  
        // If element matches 
        // increment both pointers 
        if (A[i] == B[j]) { 
  
            i++; 
            j++; 
  
            // If array B is completely 
            // traversed 
            if (j == m) 
                return true; 
        } 
        // If not, 
        // increment i and reset j 
        else { 
            i = i - j + 1; 
            j = 0; 
        } 
    } 
  
    return false; 
} 

void fri(int a[],int l,int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}  

// Driver Code 
int main() 
{ 
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    fri(a, 0, n);
    fri(b, 0, m);
  
    if (isSubArray(a, b, n, m)) 
        cout << "YES\n"; 
    else
        cout << "NO\n"; 
  
    return 0; 
} 