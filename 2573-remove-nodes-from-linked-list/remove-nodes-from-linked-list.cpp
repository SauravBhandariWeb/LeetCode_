
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {

        vector<ListNode*> node;
        while (head) {
            while (!node.empty() && node.back()->val < head->val) {
                node.pop_back();
            }
            node.push_back(head);
            head = head->next;
        }
        // reconnected the node
        for (int i = 0; i < node.size() - 1; i++) {
            node[i]->next = node[i + 1];
        }
        node.back()->next = NULL;
        return node.front();
    }
};