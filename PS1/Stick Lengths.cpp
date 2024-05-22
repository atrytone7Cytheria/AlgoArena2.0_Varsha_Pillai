#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <climits>
using namespace std;
 
 
 
long long int find_cost(long long int* a, int n)
{
    sort(a,a+n);
    long long int t=a[n/2];
    long long int c=0;
    for(int i=0;i<n;i++){
        c+=(abs(t-a[i]));
    }
    return c;
}
 
// Driver Code
int main()
{
    
    int n ;
    cin >> n;
    long long int a[n];
  
    for(int i=0;i<n;i++){
        cin >> a[i];
      
    }
 
    // Function Call
    long long int cost = find_cost(a, n);
    cout  << cost;
    return 0;
}