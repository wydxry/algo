[剑指 Offer 06. 从尾到头打印链表](https://leetcode.cn/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/)

- 解法一：顺序放入数组再翻转数组元素 时间复杂度O(n), 空间复杂度O(n).
```C++
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        auto q = head;
        while (q) {
            res.push_back(q->val);
            q = q->next;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
```

- 解法二：递归（不用翻转数组元素） 时间复杂度O(n), 空间复杂度O(n).
```C++
class Solution {
public:
    vector<int> res;
    void deal(ListNode* head) {
        if (!head) return;
        deal(head->next);
        res.push_back(head->val);
    }
    vector<int> reversePrint(ListNode* head) {
        deal(head);
        return res;
    }
};
```