// 160

/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        int m = 0 ,n = 0;
        while(tempA!=NULL){
            m++;
            tempA = tempA->next;
        }
        while(tempB!=NULL){
            n++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        int diff = abs(m-n);
        if(m>n){
            for(int i=1;i<=diff;i++){
                tempA = tempA->next;
            }
        }
        else{
            for(int i=1;i<=diff;i++){
                tempB = tempB->next;
            }
        }
        while(tempA!= NULL && tempB!=NULL){
            if(tempA == tempB){
                return tempA;
            }
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return tempA;
    }
};*/

