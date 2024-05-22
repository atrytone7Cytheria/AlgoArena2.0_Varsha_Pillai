#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void solve(vector<pair<ll, ll>>& timings, ll N)
{
    vector<pair<ll, pair<ll, ll>>> vec(N);
    for (int i = 0; i < N; i++) {
        vec[i].first = timings[i].first;
        vec[i].second.first = timings[i].second;
        vec[i].second.second = i;
    }

    sort(vec.begin(), vec.end());

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> occupiedRooms;

    int roomCnt = 0;
    vector<int> ans(N);

    for (int i = 0; i < N; i++) {
        ll arrivalTime = vec[i].first;
        ll departureTime = vec[i].second.first;
        ll idx = vec[i].second.second;

        if (occupiedRooms.empty() || occupiedRooms.top().first >= arrivalTime) {
            roomCnt += 1;
            occupiedRooms.push({departureTime, roomCnt});
            ans[idx] = roomCnt;
        }
        else {
            int vacantRoom = occupiedRooms.top().second;
            occupiedRooms.pop();
            occupiedRooms.push({departureTime, vacantRoom});
            ans[idx] = vacantRoom;
        }
    }

    cout << roomCnt << "\n";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}

int main()
{
    ll N;
    cin >> N;
    vector<pair<ll, ll>> timings(N);
    for (int i = 0; i < N; i++) {
        cin >> timings[i].first >> timings[i].second;
    }

    solve(timings, N);
    return 0;
}
