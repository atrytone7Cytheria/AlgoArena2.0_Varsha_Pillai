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
 
ll solve(ll* arr, int n) { 
    ll high = 0;
    for(ll i = 0; i < n; i++) {
        high = max(high, arr[i]);
    }
    vector<ll> count(high + 1, 0);
    for(ll j = 0; j < n; j++) {
        count[arr[j]]++;
    }
    for(ll i = high; i >= 1; i--) {
       ll j = i;
       ll counter = 0;
       while(j <= high) {
            if(count[j] >= 2) {
                return j;
            } 
            else if(count[j] == 1) {
                counter += 1;
            }
            j += i;
            if(counter == 2) {
                return i;
            }
       }
    }
    return 0; // This is added to handle the case where no such i is found
} 
 
/* Driver program to test above function */
int main() { 
    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << solve(arr, n);
    return 0;
}
