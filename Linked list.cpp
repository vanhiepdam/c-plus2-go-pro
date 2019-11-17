#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int data;
    struct node* next;
};
struct node* top = NULL;
struct node* top_clone = NULL;
void inputt(int input) {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = input;
    newnode->next = top;
    top = newnode;
    top_clone = top;
}
void print() {
    while(top_clone != NULL) {
        cout << top_clone->data << " ";
        top_clone = top_clone->next;
    }
    cout << "\n";
}
int main() {
    cout << "Linked list" << endl;
    int input;
    string option;
    do {
        cout << "Input a number: ";
        cin >> input;
        inputt(input);
        cout << "should i print the list or not (yes/no)" << endl;
        cin >> option;
        if(option == "yes") {
            print();
        }
        else if(option == "no") {
            continue;
        }
        else {
            return 0;
        }
    } while(true);
}
