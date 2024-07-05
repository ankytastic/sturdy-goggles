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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> r;
        vector<int> ans;
        if (!head || !head->next || !head->next->next) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* n = head->next->next;
        int i = 1;
        int minDi = INT_MAX;

        while (n != nullptr) {
            if ((curr->val > prev->val && curr->val > n->val) ||
                (curr->val < prev->val && curr->val < n->val)) {
                if (!r.empty()) {
                    minDi = min(minDi, i - r.back());
                }
                r.push_back(i);
            }
            prev = curr;
            curr = n;
            n = n->next;
            i++;
        }
        if (r.size() < 2) {
            ans.push_back(-1);
            ans.push_back(-1);
        } else {
            ans.push_back(minDi);
            ans.push_back(r.back() - r[0]);
        }
        return ans;
    }
};
