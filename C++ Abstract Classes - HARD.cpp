#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{

   protected:
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache: public Cache {
    public:
        Node* tail = NULL;
        Node* head = NULL;
        LRUCache(int c1) {cp = c1;}
        void set(int c1, int c2) {
            bool hitormiss = false;
            // temps
            int temp_key;
            int temp_value;
            int temp_key2;
            int temp_value2;
            if(mp.size() == cp) {
                Node* sforkey = head;
                while(sforkey != NULL) {
                    if(sforkey->key == c1) {
                        hitormiss = true;
                        break;
                    } else {
                        sforkey = sforkey->next;
                    }
                }
                // hit case
                if(hitormiss == true) {
                    if(cp == 1) {
                        head->value = c2;
                    } else {
                        int stopkey = sforkey->next->key;
                        Node* reoder = head;
                        while(reoder->next->key != stopkey || reoder->next == NULL) {
                            if(reoder == head) {
                                temp_key = head->next->key;
                                temp_value = head->next->value;
                                head->next->key = head->key;
                                head->next->value = head->value;
                                head->key = sforkey->key;
                                head->value = c2;
                                reoder = reoder->next;
                            } else {
                                temp_key2 = reoder->next->key;
                                temp_value2 = reoder->next->value;
                                reoder->next->key = temp_key;
                                reoder->next->value = temp_value;
                                temp_key = temp_key2;
                                temp_value = temp_value2;
                                reoder = reoder->next;
                            }
                        }
                    }
                } else { // miss case
                    Node* reoder = head;
                    while(reoder->next != NULL) {
                        if(reoder == head) {
                            temp_key = head->next->key;
                            temp_value = head->next->value;
                            head->next->key = head->key;
                            head->next->value = head->value;
                            head->key = c1;
                            head->value = c2;
                        } else {
                            temp_key2 = reoder->next->key;
                            temp_value2 = reoder->next->value;
                            reoder->next->key = temp_key;
                            reoder->next->value = temp_value;
                            temp_key = temp_key2;
                            temp_value = temp_value2;
                        }
                        reoder = reoder->next;
                    }
                }
            } else {
                if(head == NULL) {
                    mp[c1] = new Node(c1, c2);
                    head = mp[c1];
                    tail = mp[c1];
                } else {
                    if(mp[c1] == nullptr) {
                        mp[c1] = new Node(c1, c2);
                        mp[c1]->next = head;
                        head->prev = mp[c1];
                        head = mp[c1];
                    } else {
                        mp[c1]->value = c2;
                    }
                }
            }
        }
        int get(int c1) {
            Node* find_key = head;
            bool key_exist = true;
            while(key_exist != false) {
                if(find_key->key == c1) {
                    return find_key->value;
                }
                if(find_key->next == NULL) {
                    key_exist = false;
                } else {
                    find_key = find_key->next;
                }
            }
            return -1;
        }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      }
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
