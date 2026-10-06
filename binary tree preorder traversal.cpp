#include <vector>
#include <stack>

// Do NOT include struct TreeNode here, the platform provides it!

class Solution {
public:
    // 1. Recursive Approach
    void preorderRecursive(TreeNode* root, std::vector<int>& result) {
        if (root == nullptr) return;
        
        result.push_back(root->val);       
        preorderRecursive(root->left, result);  
        preorderRecursive(root->right, result); 
    }

    // 2. Iterative Approach (Choose either this or recursive based on what you need)
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> result;
        if (root == nullptr) return result;
        
        std::stack<TreeNode*> st;
        st.push(root);
        
        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();
            
            result.push_back(curr->val); 
            
            if (curr->right != nullptr) {
                st.push(curr->right);
            }
            if (curr->left != nullptr) {
                st.push(curr->left);
            }
        }
        return result;
    }
};
