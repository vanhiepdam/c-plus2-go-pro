#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
void push() {
   int val;
   cout<<"push: ";
   cin>>val;
   if (rear == NULL) {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } else {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}
void pop() {
   temp = front;
   if (front == NULL) {
      cout<<"queue is empty."<< endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout << "popped element: "<< front->data << endl;
      free(front);
      front = temp;
   } else {
      cout << "popped element: "<< front->data << endl;
      free(front);
      front = NULL;
      rear = NULL;
   }
}
void front_() {
    if(front == NULL) {
        cout << "queue is empty." << endl;
    }
    else {
        cout << "top element: " << rear->data << endl;
    }
}
void last() {
    if(rear == NULL) {
        cout << "queue is empty." << endl;
    }
    else {
        cout << "last element: " << front->data << endl;
    }
}
void isEmpty() {
    if(front == NULL) {
        cout << "Yes." << endl;
    }
    else {
        cout << "No." << endl;
    }
}

int main() {
    cout << "input operation 1 - 5" << endl;
    cout << "1 ) push" << endl;
    cout << "2 ) pop" << endl;
    cout << "3 ) top" << endl;
    cout << "4 ) last " << endl;
    cout << "5 ) isEmpty?" << endl;
    unsigned short input;
    bool trueee = true;
    int push_input;
    do {
        cout << "input: ";
        cin >> input;
        switch(input) {
            case 1: {
                push();
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                front_();
                break;
            }
            case 4: {
                last();
                break;
            }
            case 5: {
                isEmpty();
                break;
            }
        }
    } while (input <= 5 && input > 0);
}
