#include <iostream>
#include <cstdlib>


using namespace std;

struct node{
    int data;
    struct node* next;
};
node* bottom;
struct node* top = NULL;
void push(int n) {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = top;
    top = newnode;
    if(newnode->next == NULL) {
        bottom = top;
    }
}
void pop() {
    if(top == NULL) {
        cout << "stack is empty.";
    }
    else {
        cout << "popped element: " << top->data << endl;
        top = top->next;
    }
}
void top_() {
    if(top == NULL) {
        cout << "stack is empty." << endl;
    }
    else {
        cout << "top element: " << top->data << endl;
    }
}
void last() {
    if(top == NULL) {
        cout << "stack is empty." << endl;
    }
    else {
        cout << "last element: " << bottom->data << endl;
    }
}
void isEmpty() {
    if(top == NULL) {
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
                cout << "push: ";
                cin >> push_input;
                push(push_input);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                top_();
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
