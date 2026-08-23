
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        
        unordered_map<ListNode*,int> m;
        
        int i = 0;
        
        while (head) {
            
            // if ele not find then push node into the map
            
            if (m.find(head) == m.end()) {

            m[head] = i;

            } else  return head;
        
            head = head->next;

            i++;

        }
        return  nullptr;
    }
};