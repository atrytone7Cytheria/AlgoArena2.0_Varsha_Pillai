#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>
#include <climits>
using namespace std;
 
 
 
 
 
// Driver Code
int main()
{
    
    int n ;
    cin >> n;
    map <int,int> a;
  
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]=i;
        
    }
     long long int cost =1;
    for(int i=0;i<n;i++){
        if(a[i]> a[i+1]){
           cost+=1;
        }
    }
 
    // Function Call 3 2 5 1 4
   
    cout  << cost;
    return 0;
}