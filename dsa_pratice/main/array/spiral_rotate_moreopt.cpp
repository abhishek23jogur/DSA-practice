#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiral(int n, int m) {

    vector<vector<int>> ans(n, vector<int>(m));

    int left = 0;
    int right = m - 1;
    int top = 0;
    int bot = n - 1;

    int num = 1;

    while (top <= bot && left <= right) {

        // Left -> Right
        for (int i = left; i <= right; i++) {
            ans[top][i] = num++;
        }
        top++;

        // Top -> Bottom
        for (int i = top; i <= bot; i++) {
            ans[i][right] = num++;
        }
        right--;

        // Right -> Left
        if (top <= bot) {
            for (int i = right; i >= left; i--) {
                ans[bot][i] = num++;
            }
            bot--;
        }

        // Bottom -> Top
        if (left <= right) {
            for (int i = bot; i >= top; i--) {
                ans[i][left] = num++;
            }
            left++;
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> ans = spiral(6, 6);

    for (auto row : ans) {
        for (auto x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}