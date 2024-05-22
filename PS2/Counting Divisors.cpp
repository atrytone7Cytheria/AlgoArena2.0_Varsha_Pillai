#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <set>
#include <utility>
#include <climits>
#include <queue>
#include <cmath>
#define ll long long int
using namespace std;
 
 
 
int countDivisors(int n) 
{ 
    int cnt = 0; 
    for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        int x=countDivisors(a);
        cout << x <<"\n";
 
    }
   
   return 0;
} 
