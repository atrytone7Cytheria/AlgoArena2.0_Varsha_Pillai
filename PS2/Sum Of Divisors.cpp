#include<iostream>
#include<cmath>
#define ll long long int
using namespace std;
const unsigned int M = 1000000007;
 
long long sum_all_divisors(long long num) {
    long long sum = 0;
    for (long long i = 1; i <= sqrt(num); i++) {
        long long t1 = (i * (num / i - i + 1)) % M; // Adding i for each multiple of i from i to num / i
        long long ni = (num / i)%M;
        long long t2 = ((ni * (ni + 1) / 2) % M - (i * (i + 1) / 2) % M + M) % M; // Sum of numbers from i+1 to num / i
        
        sum = (sum + t1 + t2) % M;
    }
    return sum;
}
 
int main() {
    ll n;
    cin >> n;
    long long sum = sum_all_divisors(n);
    cout << sum << '\n';
    return 0;
}