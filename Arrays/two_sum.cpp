#include <bits/stdc++.h>
using namespace std;

vector<int> two_Sum(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> ans = two_Sum(arr, target);

    if (ans.size()==2) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}