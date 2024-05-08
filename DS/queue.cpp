#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next= NULL;
};

class MyQueue{
      Node* front = NULL;
      Node* rear = NULL;
      public:
      void push(int number)
      {
          Node* newNode = new Node();
          newNode->data = number;

          if(front == NULL){
               front = newNode;
               rear = newNode;
          }else{
               rear->next = newNode;
               rear = rear->next;
          }
      }

      int pop()
      {
        int data ;
            if(front!=NULL)
            {
                data = front->data;
                front = front->next;
            }
            return data;
      }

      int getFront(){
           return front->data;
      }
      int getRear(){
           return rear->data;
      }
};
int main(int argc, char const *argv[])
{
    MyQueue mq;
    mq.push(60);
    mq.push(20);
    mq.push(30);
    mq.push(55);
    cout << "Front : " << mq.getFront() << endl;
    cout << mq.pop() << endl;
    cout << mq.pop() << endl;
    cout << "Front : " << mq.getFront() << endl;
    cout << mq.pop() << endl;
    return 0;
}
