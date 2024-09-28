#include<bits/stdc++.h>
using namespace std;

void solve(string &str, int ind, vector<string> &ans) {
    if (ind == str.size() - 1) {
        ans.push_back(str);
        return;
    }

    for (int i = ind; i < str.size(); i++) {
        swap(str[ind], str[i]);
        solve(str, ind + 1, ans);
        // Backtracking
        swap(str[ind], str[i]);
    }
}

vector<string> permute(string &str) {
    vector<string> ans;
    int ind = 0;
    solve(str, ind, ans);
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<string> ans = permute(str);
    for (auto it : ans) {
        cout << it << endl;
    }

    return 0;
}
