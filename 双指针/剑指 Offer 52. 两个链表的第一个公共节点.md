[剑指 Offer 52. 两个链表的第一个公共节点](https://leetcode.cn/problems/liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof/)

- 解法一：双指针 时间复杂度O(max(n, m)) 空间复杂度O(1).
```C++
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        auto qa = headA, qb = headB;
        while (qa) {
            ++lenA;
            qa = qa->next;
        }
        while (qb) {
            ++lenB;
            qb = qb->next;
        }
        if (lenA >= lenB) {
            lenA -= lenB;
            qa = headA;
            qb = headB;
            while (lenA--) qa = qa->next;
            while (qa) {
                if (qa == qb) return qa;
                qa = qa->next;
                qb = qb->next;
            } 
        } else {
            lenB -= lenA;
            qa = headA;
            qb = headB;
            while (lenB--) qb = qb->next;
            while (qa) {
                if (qa == qb) return qa;
                qa = qa->next;
                qb = qb->next;
            }
        }
        return nullptr;
    }
};
```

