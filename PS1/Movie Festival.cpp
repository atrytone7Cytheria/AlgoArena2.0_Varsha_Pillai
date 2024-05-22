#include<iostream>
#include<algorithm>
#include <vector>
#include <string>
#include <map>
#include <utility>
using namespace std;
bool sortFnc(pair<int, int>& p1, pair<int, int>& p2)
{
    return p1.second < p2.second;
}
 
// function to calculate the maximum number of movie we can
// watch
int solve(vector<pair<int, int> >& movies, int N)
{
    // sort the movies according to the ending time
    sort(movies.begin(), movies.end(), sortFnc);
 
    // Variable to track the time elapsed and the number of
    // movies watched
    int timeElapsed = 0, moviesWatched = 0;
    for (int i = 0; i < N; i++) {
        // If the current movie starts after the time
        // elapsed so far, then we can watch it
        if (movies[i].first >= timeElapsed) {
            moviesWatched++;
            timeElapsed = movies[i].second;
        }
    }
    // return the total number of movies watched
    return moviesWatched;
}
 
int main()
{  
    int n;
    cin >>n ;
    vector<pair <int,int>> A(n);
   
    for(int i=0;i<n;i++){
        cin >>A[i].first >> A[i].second;
    }
     
    cout << solve(A,n);
    cout << endl;
    return 0;
}
