#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <sstream>

class Person {
    public:
        string name;
        int age;
        virtual void getdata() {}
        virtual void putdata() {}
};

class Student: public Person {
    private:
        int marks[6];
        int cur_id;
    public:
        static int id;
        Student() {
            id++;
            cur_id = id;
        };
        void getdata() {
            cin >> this->name >> this->age >> this->marks[0] >> this->marks[1] >> this->marks[2] >> this->marks[3] >> this->marks[4] >> this-> marks[5];
        }
        void putdata() {
            int this_sum = 0;
            for(int c = 0; c < 6; c++) {
                this_sum += marks[c];
            }
            cout << this->name << " " << this->age << " " << this_sum << " " << this->cur_id << endl;
        }
};

class Professor: public Person {
    private:
        int publications;
        int cur_id;
    public:
        static int id;
        Professor() {
            id++;
            cur_id = id;
        };
        void getdata() {
            cin >> this->name >> this->age >> this->publications;
        }
        void putdata() {
            cout << this->name << " " << this->age << " " << this->publications << " " << this->cur_id << endl;
        }
};

int Student::id = 0;
int Professor::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
