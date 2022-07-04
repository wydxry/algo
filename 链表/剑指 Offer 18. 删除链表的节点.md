[剑指 Offer 18. 删除链表的节点](https://leetcode.cn/problems/shan-chu-lian-biao-de-jie-dian-lcof/)

- 解法一：双指针 时间复杂度O(n), 空间复杂度O(1).
```C++
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (!head) return head;
        if (head->val == val) return head->next;
        auto q = head, p = head->next;
        while (p) {
            if (p->val == val) {
                q->next = p->next;
                break;
            }
            q = q->next;
            p = p->next;
        }
        return head;
    }
};
```