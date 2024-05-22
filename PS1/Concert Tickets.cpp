#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
void solve(vector<int> &tickets, vector<int> &customer, int N, int M) {
 
    map <int, int> pendingTickets;
    for (int i = 0; i < N; i++) {
        pendingTickets[tickets[i]] += 1;
    }
 
    for (int i = 0; i < M; i++) {
        auto it = pendingTickets.upper_bound(customer[i]);
        if (it == pendingTickets.begin()) {
            cout << -1 << "\n";
        }
        else {
            it--;
            cout << it->first << "\n";
            it->second -= 1;
            if (it->second == 0)
                pendingTickets.erase(it);
        }
    }
}
 
int main()
{  
    int n,m;
    cin >>n >> m;
    vector <int> A(n);
    vector <int> B(m);
    for(int i=0;i<n;i++){
        cin >>A[i];
    }
     for(int i=0;i<m;i++){
        cin >>B[i];
      
       
    }
    solve(A,B,n,m);
    cout << endl;
    return 0;
}