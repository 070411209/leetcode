/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root == nullptr)
            return root;
        
        connectTwoNode(root->left, root->right);
        return root;
    }

    void connectTwoNode(Node* node1, Node* node2) {
        if(node1 == nullptr || node2 == nullptr)
            return;
        
        node1->right->next = node2->left;
        node2->right = nullptr;

        connectTwoNode(node1->left, node1->right);
        connectTwoNode(node2->left, node2->right);
        
    }
};
// @lc code=end

