[剑指 Offer 25. 合并两个排序的链表](https://leetcode.cn/problems/he-bing-liang-ge-pai-xu-de-lian-biao-lcof/)

- 解法一：迭代法 时间复杂度O(n + m), 空间复杂度O(1).
```C++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(-1);
        auto q1 = l1, q2 = l2, q = dummy;
        while (q1 && q2) {
            if (q1->val <= q2->val) {
                q->next = q1;
                q1 = q1->next;
            } else {
                q->next = q2;
                q2 = q2->next;
            }
            q = q->next;
        }
        if (q1) q->next = q1;
        else q->next = q2;
        return dummy->next;
    }
};
```
- 解法二：递归法 时间复杂度O(n + m), 空间复杂度O(n + m).
```C++
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (!l2) return l1;
        if (!l1) return l2;
        ListNode *head = new ListNode(-1);
        if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};
```