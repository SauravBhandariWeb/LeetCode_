class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // collect all the elements from the list
        vector<int> v;
        for (auto node : lists) {
            while(node) {
                v.push_back(node->val);
                node=node->next;
            }
        }
        sort(v.begin(),v.end());
        ListNode* ans=new ListNode(-1);
        ListNode* pointer = ans;
        for(int x:v){
            pointer->next=new ListNode(x);
            pointer= pointer->next;
        }
        return ans->next;
    }
};