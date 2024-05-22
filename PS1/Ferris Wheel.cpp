#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
 
using namespace std;
int solve(vector<long long int>& A, int N, int M)
{
    // Sort the array in ascending order
    sort(A.begin(), A.end());
 
    long long int ptrA = 0, ptrB = N-1, ans = 0;
    while(ptrA<=ptrB){
  if(A[ptrA]+A[ptrB]<=M){
         ptrB--;
        ptrA++;
        ans++;
        
    }
    else{
        ptrB--;
        ans++;
         
    }
    }
  
    return ans;
}
int main()
{  
    long int n,m;
    cin >>n >> m;
    vector <long long int> A(n);
   
    for(int i=0;i<n;i++){
        cin >>A[i];
    }
   
    cout<< solve(A,n,m);
    cout << endl;
}