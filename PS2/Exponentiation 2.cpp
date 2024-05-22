#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <set>
#include <utility>
#include <climits>
#include <queue>
using namespace std;
long long int solve( long long int a,long long int b,int M){
    long long int ans=1;
     
    while(b>0){
        if(b&1){
           ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
 
int main(){
    long long n;
    cin >> n;
    while(n--){
        long long int a,b,c;
        cin >> a >> b>>c;
        long long int x;
        int M = 1000000007;
        x=solve(a,solve(b,c,M-1),M);
 
        cout << x <<"\n"; 
    }
}  
      
