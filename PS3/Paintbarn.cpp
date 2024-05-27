
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <numeric>  

using namespace std;
int main() {
   
    int N,M;
    cin >> N >> M;

    vector<vector<int>> dp(1001, vector<int> (1001, 0));

    for(int i=0;i<N;i++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

      for(int j=r1;j<=r2;j++) {
            dp[j][c1]++;
            dp[j][c2]--;
        }
    }
    int ans = 0;
    for(int r=0;r<1001;r++) {
         for(int c=0;c<1001;c++)  {
            dp[r][c] += dp[r][c - 1];
            if (dp[r][c] == M) {
                ans++;
            }
        }
    }


    cout << ans;
}