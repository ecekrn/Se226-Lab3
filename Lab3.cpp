#include <iostream>
#include <stack>
using namespace std;
#define MAX 1000
class Node {
    public:
        int data;
        Node *next;
        Node(int x, Node *n) {data=x; next=n;}
        Node(){data = 0; next = NULL;}
};
Node* top = NULL;
bool isempty()
{
 if(top == NULL)
 return true; else
 return false;
}

void push (int value)
{
  Node *ptr = new Node();
  ptr->data = value;
  ptr->next = top;
  top = ptr;
}

void pop ( )
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *ptr = top;
  top = top -> next;
  delete(ptr);
 }
}

 void showTop()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
  cout<<"Element at top is : "<< top->data;
}

void displayStack()
{
 if ( isempty() )
  cout<<"Stack is Empty";
 else
 {
  Node *temp=top;
  while(temp!=NULL)
  {   cout<<temp->data<<" ";
   temp=temp->next;
  }
  cout<<"\n";
 }
 }

int main()
{
    Node *b = new Node(5, nullptr);
    top = b;
    int input = -1;
    stack<int> stck;
    int Product = 1;
    int choice, flag=1, value;

    while( flag == 1)
 {
 cout<<"\n 1.Push 2.Pop 3.Show Top 4.Display Stack 5.Display Size 6.Exit\n";
 cin>>choice;
 switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         push(value);
         break;
 case 2: pop();
         break;
 case 3: showTop();
         break;
 case 4: displayStack();
         break;
 case 5: cout<<"size of stack is: "<<stck.size();
   while (stck.size()>0){
      Product = Product * stck.top();
      stck.pop();}
      cout<<"\nProduct of elements in stack are: "<<Product;;
 case 6: flag = 0;
         break;
 }
 }

    return 0;
}
