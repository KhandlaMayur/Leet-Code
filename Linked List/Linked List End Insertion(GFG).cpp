/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node *newnode = new Node(x);
        if(head == nullptr){
            return newnode;
        }
        Node* last = head;
        while(last->next != nullptr){
            last = last->next;
        }
        last->next = newnode;
        return head;
    }
};
