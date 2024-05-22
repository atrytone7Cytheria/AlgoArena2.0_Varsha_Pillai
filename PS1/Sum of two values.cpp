#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    map<int, int> A;
    map<int, int> B;
    int arr[n];
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        A[arr[i]] = i+1; 
        B[arr[i]] +=1 ;
    }
    int h = 9;
    for (int j = 0; j < n; j++) {
        if (B[k - arr[j]]>0  ) {
            if(((k-arr[j])==arr[j])&& B[k-arr[j]]==1){
               continue;
            }
            else{
             h = 8;
            cout << j + 1 << " " << A[k - arr[j]]; // Print indices (+1 for 1-based index)
            break;
            }
           
        }
    }
 
    if (h == 9) {
        cout << "IMPOSSIBLE";
    }
 
    return 0;
}