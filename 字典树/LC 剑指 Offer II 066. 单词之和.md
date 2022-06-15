[剑指 Offer II 066. 单词之和](https://leetcode.cn/problems/z1R5dt/)
```C++
class MapSum {
public:
    /** Initialize your data structure here. */
    struct Trie
    {
        int val;
        Trie *child[26];
        Trie() {
            val = 0;
            memset(child, 0, sizeof child);
        }
    };
    Trie *root = new Trie();
    int s = 0;
    MapSum() {

    }
    
    void insert(string key, int val) {
        Trie *cur = root;
        for (auto& c: key) {
            if (!cur->child[c - 'a']) cur->child[c - 'a'] = new Trie();
            cur = cur->child[c - 'a'];
        }
        cur->val = val;
    }

    void deal(Trie *root) {
        if (!root) return ;
        s += root->val;
        for (int i = 0; i < 26; i++) {
            deal(root->child[i]);
        }
    }
    
    int sum(string prefix) {
        s = 0;
        Trie *cur = root;
        for (auto& c: prefix) {
            if (!cur->child[c - 'a']) return 0;
            cur = cur->child[c - 'a'];
        }
        deal(cur);
        return s;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
```