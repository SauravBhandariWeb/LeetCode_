class Solution {
public:
    void gcdCollector(ListNode* head, vector<ListNode*>& gcdNode) {

        while(head->next!=NULL) {
            int value = gcd(head->val, head->next->val);
            gcdNode.push_back(new ListNode(value));
            head = head->next;
        }
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        // collect gcd ele from two node

        if (head->next == NULL)
            return head;

        vector<ListNode*> gcdNode;

        gcdCollector(head, gcdNode);

        ListNode* pointer = head;
        
        for(ListNode* x : gcdNode) {
            
            ListNode* nextNode = pointer->next;
           
            pointer->next = x;
           
            x->next = nextNode;
           
            pointer = nextNode;
            
        }

        return head;
    }
};