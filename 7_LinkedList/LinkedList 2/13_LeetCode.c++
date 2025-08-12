// 142. Linked List Cycle II

/*class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false; // no cycle
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast){
                flag = true;
                break;
                }
        }
        if(flag==false) return NULL;
        else{
            ListNode* temp = head;
            while(temp!=slow){
                temp = temp->next;
                slow = slow->next;
            }
            return temp;
        }
        
    }
};*/