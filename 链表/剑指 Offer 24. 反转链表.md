[剑指 Offer 24. 反转链表](https://leetcode.cn/problems/fan-zhuan-lian-biao-lcof/)

- 解法一：迭代法 时间复杂度O(n)，空间复杂度O(1)
```C++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = nullptr;
        auto q = head, t = head;
        while (q) {
            t = q->next;
            q->next = pre;
            pre = q;
            q = t;
        }
        return pre;
    }
};
```
- 解法二：递归法 时间复杂度O(n)，空间复杂度O(n)
```C++
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *newhead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newhead;
    }
};
```