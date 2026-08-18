/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int length(ListNode *head){
        // Node* curr = head;
        int count = 0;
        while(head != nullptr){
            count++;
            head = head->next;
        }
        return count;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = length(headA);
        int m = length(headB);

        ListNode* currA = headA;
        ListNode* currB = headB;

        int diff = abs(m - n);
        if(m > n){
            for(int i = 0; i < diff; i++){
                currB = currB->next;
            }
        }else{
            for(int i = 0; i < diff; i++){
                currA = currA->next;
            }
        }

        while(currA != currB){
            currA = currA->next;
            currB = currB->next;
        }
        return currA;
    }
};
