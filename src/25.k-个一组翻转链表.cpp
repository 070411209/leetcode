/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* hair = new ListNode(0);
            hair->next = head;
            ListNode* pre = hair;
            while (head)
            {
                ListNode* tail = pre;
                for(auto i = 0; i < k; i++) {
                    tail = tail->next;
                    if(!tail)
                        return hair->next;
                }

                ListNode* nex = tail->next;
                pair<ListNode*, ListNode*> result = myReverse(head, tail);
                head = result.first;
                tail = result.second;
                // 把子链表重新接回原链表
                pre->next = head;
                tail->next = nex;
                pre = tail;
                head = tail->next;          
            }
            return hair->next;
        }

        // 翻转一个子链表，并且返回新的头与尾
        pair<ListNode*, ListNode*> myReverse(ListNode* head, ListNode* tail) {
            ListNode* prev = tail->next;
            ListNode* p = head;
            while (prev != tail) {
                ListNode* nex = p->next;
                p->next = prev;
                prev = p;
                p = nex;
            }
            return {tail, head};
        }
};
// @lc code=end

