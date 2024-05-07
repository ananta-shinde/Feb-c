#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next = NULL;
};

class LinkedList{
    Node* head= NULL;
    public:
    void insertAtEnd(int number){
        Node* newnode = new Node();
        newnode->data = number;
        
        if(head == NULL){
            head = newnode;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }

    }

    void insertAtStart(int number)
    {
          Node* newNode = new Node();
          newNode->data = number;

          if(head == NULL){
            head = newNode;
          }
          else{
             Node* temp = head;
             newNode->next = temp;
             head = newNode;
          }
    }

    void printList(){
          Node* temp = head;
          while(temp !=NULL)
          {
            cout << temp->data;
            temp = temp->next;
          }
    }

    void deleteAtEnd(){
        if(head != NULL){
            Node* temp = head;
            while(temp->next->next !=NULL){
                temp = temp->next;
            }
            temp->next  = NULL;
        }
    }

    void deleteByValue(int number)
    {
          if(head!=NULL){
             Node* temp = head;
             if(head->data == number){
                head = head->next;
                return;
             }
             while(temp->next->data != number){
                temp = temp->next;
             }
             temp->next = temp->next->next;
          }
    }
};
int main(int argc, char const *argv[])
{
    
    LinkedList mylist;

    mylist.insertAtEnd(20);
    mylist.insertAtEnd(50);
    mylist.insertAtEnd(40);
    mylist.insertAtEnd(60);

    mylist.insertAtStart(22);
    mylist.deleteByValue(22);
    
    mylist.printList();

    return 0;
}
