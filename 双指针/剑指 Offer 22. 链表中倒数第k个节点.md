[剑指 Offer 22. 链表中倒数第k个节点](https://leetcode.cn/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof/)

- 解法一：双指针 一次遍历 时间复杂度O(n), 空间复杂度O(1).
```c++
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        auto dummy = new ListNode(-1, head), q = head, p = dummy;
        while (k--) {
            q = q->next;
        }
        while (q) {
            q = q->next;
            p = p->next;
        }
        return p->next;
    }
};
```