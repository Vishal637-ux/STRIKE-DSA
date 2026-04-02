#include <bits/stdc++.h>
using namespace std;

// Function to check if we can place k cows
// with at least 'dist' distance between them
bool canPlaceCows(vector<int>& stalls, int k, int dist) {
    int cows = 1;                // first cow placed
    int lastPos = stalls[0];     // position of last cow

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= dist) {
            cows++;
            lastPos = stalls[i];

            if (cows == k)
                return true;
        }
    }
    return false;
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int maxDist = stalls[n - 1] - stalls[0];

    // BRUTE FORCE: try every distance
    for (int d = maxDist; d >= 1; d--) {
        if (canPlaceCows(stalls, k, d)) {
            return d;   // first valid distance is answer
        }
    }
    return 0;
}

int main() {
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;

    cout << aggressiveCows(stalls, k);
    return 0;
}
