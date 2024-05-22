#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
int solve(vector<int> & A, vector<int> &B, int N) {
 
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int i=0 ,j=0;  
    int currentCustomers = 0, maxCustomers = 0;   
    while ( i<N && j<N){
        if(A[i]<B[j]){
            currentCustomers++;
            maxCustomers=max(maxCustomers,currentCustomers);
            i++;
 
        }
        else{
            j++;
            currentCustomers--;
        }
    }
    return maxCustomers;
}
 
int main()
{  
    int n;
    cin >>n ;
    vector <int> A(n);
    vector <int> B(n);
    for(int i=0;i<n;i++){
        cin >>A[i]>>B[i];
    }
     
    cout << solve(A,B,n);
    cout << endl;
    return 0;
}
