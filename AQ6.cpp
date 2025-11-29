#include <iostream>
#include <unordered_set>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};


bool check(TreeNode* root, unordered_set<int> &s) {
    if (root == NULL) return false;
   
    if (s.count(root->val)) {
        return true;
    }
    
    s.insert(root->val); 

    bool leftCheck = check(root->left, s);
    bool rightCheck = check(root->right, s);
    
    return leftCheck || rightCheck;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(3); 

    unordered_set<int> s;
    if (check(root, s)) {
        cout << "Duplicates Found" << endl;
    } else {
        cout << "No Duplicates" << endl;
    }
    
    return 0;
}