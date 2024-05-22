#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <set>
#include <utility>
#include <climits>
#define ll long long int
using namespace std;
 
 
void solve(ll X, ll N, ll* P)
{
    // to store ranges
    set<pair<int, int> > ranges;
    ranges.insert({ 0, X });
    // to store range lengths
    multiset<ll> range_lengths;
    range_lengths.insert(X);
 
    for (int i = 0; i < N; i++) {
        ll pos = P[i];
        // find the range in which pos lies
        auto it = ranges.upper_bound({ pos, 0 });
        it--;
 
        ll start = it->first;
        ll end = it->second;
 
        // Remove range [start, end] from ranges
        ranges.erase(it);
        // Remove length of range [start, end] from the
        // range_lengths
        range_lengths.erase(
            range_lengths.find(end - start));
 
        // Insert the new ranges
        ranges.insert({ start, pos });
        ranges.insert({ pos, end });
        range_lengths.insert(pos - start);
        range_lengths.insert(end - pos);
 
        // Print the last element of multiset as the answer
        cout << *range_lengths.rbegin() << " ";
    }
}
 
// Driver Code
int main()
{
    
    int x,n ;
    cin >> x >> n;
     //index and number same order
  long long int arr[n]; //positions of numbers
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long int ans;
    solve(x,n,arr); 
    
    return 0;
}
