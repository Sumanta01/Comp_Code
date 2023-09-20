#include<bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

void insert(Node* &root, int val) {
    if (root == NULL) {
        root = new Node(val);
        return;
    }
    if (val <= root->val) {
        insert(root->left, val);
    } else {
        insert(root->right, val);
    }
}

int findClosestValue(Node* root, int target) {
    int closestVal = root->val;
    while (root != NULL) {
        if (abs(target - root->val) < abs(target - closestVal)) {
            closestVal = root->val;
        }
        if (target < root->val) {
            root = root->left;
        } else if (target > root->val) {
            root = root->right;
        } else {
            break;
        }
    }
    return target-closestVal;
}

int main() {
    string input;
    getline(cin, input);
    vector<int> nums;
    stringstream ss(input);
    int num;
    while (ss >> num) {
        nums.push_back(num);
    }
    Node* root = NULL;
    for (int num : nums) {
        insert(root, num);
    }
    int target;
    cin >> target;
    cout << findClosestValue(root, target) << endl;
    return 0;
}