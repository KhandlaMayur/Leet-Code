/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        if(head->data == key){
            return true;
        }
        Node* temp = head;
        while(temp != nullptr){
            if(temp->data == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};
