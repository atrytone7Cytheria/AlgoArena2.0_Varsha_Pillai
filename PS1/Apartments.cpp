#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
 
using namespace std;
int solve(vector<int>& A, vector<int>& B, int N, int M,
        int K)
{
    // Sort both the arrays in ascending order
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
 
    // Maintain two pointers to store the current value in
    // both the arrays
    int ptrA = 0, ptrB = 0, ans = 0;
    while (ptrA < N && ptrB < M) {
        // Check if the applicant at index ptrA can purchase
        // the apartment at index ptrB
        if (abs(A[ptrA] - B[ptrB]) <= K) {
            // Increase the number of purchase
            ans += 1;
            ptrA += 1;
            ptrB += 1;
        }
        // If the current applicant's demand is too small,
        // we will move to the next applicant
        else if (A[ptrA] < B[ptrB]) {
            ptrA += 1;
        }
        // If the current apartment's size is too small, we
        // will move to the next apartment
        else {
            ptrB += 1;
        }
    }
    return ans;
}
int main()
{  
    int n,m,k;
    cin >>n >> m >>k;
    vector <int> A(n);
    vector <int> B(m);
    for(int i=0;i<n;i++){
        cin >>A[i];
    }
     for(int i=0;i<m;i++){
        cin >>B[i];
    }
    cout<< solve(A,B,n,m,k);
    cout << endl;
}