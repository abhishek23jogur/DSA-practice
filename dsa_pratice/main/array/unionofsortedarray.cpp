#include <bits/stdc++.h>
using namespace std;

vector<int> sortedarray(vector<int> a, vector<int> b) {
    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionArr.empty() || unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // Remaining elements of a
    while (i < a.size()) {
        if (unionArr.empty() || unionArr.back() != a[i]) {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    // Remaining elements of b
    while (j < b.size()) {
        if (unionArr.empty() || unionArr.back() != b[j]) {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    vector<int> a = {1,1,2,3,4,5};
    vector<int> b = {2,3,4,4,5,6};

    vector<int> ans = sortedarray(a, b);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}