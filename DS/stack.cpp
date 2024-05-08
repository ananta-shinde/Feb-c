#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next= NULL;
};

class MyStack{
      Node* top = NULL;
      
      public:
      void push(int number)
      {
          Node* newNode = new Node();
          newNode->data = number;

          if(top == NULL){
               top = newNode;   
          }else{
               newNode->next = top;
               top = newNode;
          }
      }

      int pop()
      {
        int data ;
            if(top!=NULL)
            {
                data = top->data;
                top = top->next;
            }
            return data;
      }

      int getTop(){
           return top->data;
      }
      
};
int main(int argc, char const *argv[])
{
    MyStack msk;
    msk.push(60);
    msk.push(20);
    msk.push(30);
    msk.push(55);
    cout << "Front : " << msk.getTop() << endl;
    cout << msk.pop() << endl;
    cout << msk.pop() << endl;
    cout << "Front : " << msk.getTop() << endl;
    cout << msk.pop() << endl;
    return 0;
}
