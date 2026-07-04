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
    ListNode* deleteDuplicates(ListNode* head) {
         if (head == nullptr)
            return nullptr;
        set<int>s;
        ListNode* temp = head;

        while(temp != nullptr){
            s.insert(temp->val);
            temp = temp->next;

        }
        ListNode* h=new ListNode();
        temp =h;
        vector<int>arr;
        for(auto & p :s){
            arr.push_back(p);
        }
        
        h->val=arr[0];
        for(int i=1;i<arr.size();i++){
            temp->next=new ListNode(arr[i]);
            temp=temp->next;
        }
        return h;
        
    }
};