/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }   
};
*/

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        // code here
        Node *newnode = new Node(val);
        if(pos == 1){
            newnode->next = head;
            return newnode;
        }
        Node* curr = head;
        for(int i = 1; i < pos - 1; i++){
            curr = curr->next;
        }
        if(curr != nullptr){
            newnode->next = curr->next;
            curr->next = newnode;
        }
        return head;
        
    }
};
