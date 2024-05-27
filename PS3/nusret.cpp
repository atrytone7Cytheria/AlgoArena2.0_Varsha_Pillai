
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <numeric>  

using namespace std;
const int N = 1e5+10;

int a[N],b[N];

int main() {

      int n,k;
      cin >> n >> k;

      for(int i=1;i<=n;i++){
        cin >>a[i] ;
        b[i] = a[i] ;
        }

        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i+1])>k) {
                if(a[i]<a[i+1]) {
                    a[i] = a[i + 1] - k;
                    }
                else{
                   a[i + 1] = a[i] - k;
                   }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(abs(b[i]-a[i-1])>k) {
                if(b[i]<b[i-1]) {
                    b[i] = b[i -1] - k;
                    }
                else{
                   b[i-1] = b[i] - k;
                   }
            }
        }
        //   for (int i=1;i<=n;i++){
        //     cout << b[i]<< " ";
        // }
        // cout << "\n";
        //  for (int i=1;i<=n;i++){
        //     cout << a[i]<< " ";
        // }
        for (int i=0;i<n;i++){
            cout << max(a[i],b[i])<< " ";
        }
        return 0;

}


