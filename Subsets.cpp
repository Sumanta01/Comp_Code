#include<bits/stdc++.h>
using namespace std;

void solve(const vector<int>& num, int ind, vector<int>& output, vector<vector<int>>& ans) {
    // base case
    if (ind >= num.size()) {
        ans.push_back(output);
        return;
    }

    // recursive case
    // Exclude
    solve(num, ind + 1, output, ans);

    // Include
    output.push_back(num[ind]);
    solve(num, ind + 1, output, ans);

    // Backtrack (remove the last element to backtrack and explore other possibilities)
    output.pop_back();
}

vector<vector<int>> genSubsets(const vector<int>& num) {
    vector<vector<int>> ans;
    vector<int> output;
    int ind = 0;
    solve(num, ind, output, ans);
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<vector<int>> ans = genSubsets(num);

    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if (j < ans[i].size() - 1) {
                cout << ",";
            }
        }
        cout << "]" ;
    }

  
    
    return 0;
}
