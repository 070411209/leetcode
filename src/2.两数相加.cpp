/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = nullptr;
        ListNode* tail = nullptr;
        int carry = 0;

        while(l1 || l2) {
            int n1 = l1 ? l1->val : 0;
            int n2 = l2 ? l2->val : 0;

            int sum = (n1 + n2 + carry);
            int res = sum%10;
            carry = sum/10;
            if(!head) {
                head = new ListNode(res);
                tail = head;
                // printf("1: %d", head->val);

            }
            else {
                tail->next = new ListNode(res);
                tail = tail->next;
                //tail = new ListNode(sum%10, tail->next);
            }

            if(l2)
                l2 = l2->next;
            if(l1)
                l1 = l1->next;
        }

        if(carry > 0)
            tail->next = new ListNode(carry);

        return head;
    }
};
// @lc code=end
