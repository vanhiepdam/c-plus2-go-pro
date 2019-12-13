#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int hmm = 20; // <- Number of Students;

vector<int> highest_score(4, 0);
vector<int> lowest_score(4,-1);

class Student{
private:
    long long ID;
    string name;
    string sex;
    double qizz1;
    double qizz2;
    double mid_;
    double final_;
    double total_;
public:
    Student() {
        ID = -1;
        name = "empty";
        sex = "empty";
        qizz1 = -1;
        qizz2 = -1;
        mid_ = -1;
        final_ = -1;
    }
    void add(int section) {
        switch(section) {
        case 1:
            cout << " Enter ID: ";
            if(ID != -1) {
                cout << " Error!: ID is already existed, if you wish to update it use update function" << endl;
            } else {
                cin >> ID;
            }
            break;
        case 2:
            cout << " Enter name: ";
            if(name == "empty") {
                cin.ignore();
                getline(std::cin, name);
            } else {
                cout << " Error!: Name is already existed, if you wish to update it use update function" << endl;
            }
            break;
        case 3:
            cout << " Enter sex: ";
            if(sex == "empty") {
                cin.ignore();
                getline(std::cin, sex);
            } else {
                cout << " Error!: Sex is already existed, if you wish to update it use the update function" << endl;
            }
            break;
        case 4:
            cout << " Enter qizzes 1 score: ";
            if(qizz1 != -1) {
                cout << " Error!: Qizz(1) is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> qizz1;
            }
            break;
        case 5:
            cout << " Enter qizzes 2 score: ";
            if(qizz2 != -1) {
                cout << " Error!: Qizz(2) is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> qizz2;
            }
            break;
        case 6:
            cout << " Enter mid-term score: ";
            if(mid_ != -1) {
                cout << " Error!: Mid-term score is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> mid_;
            }
            break;
        case 7:
            cout << " Enter final score: ";
            if(final_ != -1) {
                cout << " Error!: Final score is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> final_;
            }
            break;
        }
    }
    void update_total() {
        total_ = 0;
        if(qizz1 != -1) {
            total_ += qizz1;
        }
        if(qizz2 != -1) {
            total_ += qizz2;
        }
        if(mid_ != -1) {
            total_ += mid_;
        }
        if(final_ != -1) {
            total_ += final_;
        }
    }
    void update(int section) {
        switch(section) {
        case 1:
            if(ID == -1) {
                cout << " Error!: ID is empty, perhaps add it first.. ?" << endl;;
            } else {
                cout << " Enter ID: ";
                cin >> ID;
            }
            break;
        case 2:
            if(name == "empty") {
                cout << " Error!: Name is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter name: ";
                cin >> name;
            }
            break;
        case 3:
            if(sex == "empty") {
                cout << " Error!: Sex is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter sex: ";
                cin >> sex;
            }
            break;
        case 4:
            if(qizz1 == -1) {
                cout << " Error!: Qizz(1) score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter qizzes 1 score: ";
                cin >> qizz1;
            }
            break;
        case 5:
            if(qizz2 == -1) {
                cout << " Error!: Qizz(2) score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter qizzes 2 score: ";
                cin >> qizz2;
            }
            break;
        case 6:
            if(mid_ == -1) {
                cout << " Error!: Mid-term score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter mid-term score: ";
                cin >> mid_;
            }
            break;
        case 7:
            if(final_ == -1) {
                cout << " Error!: Final score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter final score: ";
                cin >> final_;
            }
            break;
        }
    }
    void delete_(int section) {
        switch(section) {
        case 1:
            ID = -1;
            break;
        case 2:
            name = "empty";
            break;
        case 3:
            sex = "empty";
            break;
        case 4:
            qizz1 = -1;
            break;
        case 5:
            qizz2 = -1;
            break;
        case 6:
            mid_ = -1;
            break;
        case 7:
            final_ = -1;
            break;
        }
    }
    double total() {
        total_ = 0;
        if(qizz1 != -1) {
            total_ += qizz1;
        }
        if(qizz2 != -1) {
            total_ += qizz2;
        }
        if(mid_ != -1) {
            total_ += mid_;
        }
        if(final_ != -1) {
            total_ += final_;
        }
        return total_;
    }
    double average() {
        double average = 0;
        double divisor = 0;
        if(qizz1 != -1) {
            divisor ++;
            average += qizz1;
        }
        if(qizz2 != -1) {
            divisor ++;
            average += qizz2;
        }
        if(qizz1 != -1) {
            divisor ++;
            average += mid_;
        }
        if(qizz1 != -1) {
            divisor ++;
            average += final_;
        }
        return average / divisor;
    }
    long long get_ID() {
        return ID;
    }
    string get_name() {
        return name;
    }
    string get_sex() {
        return sex;
    }
    int get_qizz1() {
        return qizz1;
    }
    int get_qizz2() {
        return qizz2;
    }
    int get_mid() {
        return mid_;
    }
    int get_final() {
        return final_;
    }
};

vector<Student> student(hmm);

void add_record(int b) {
    int choice2;
    bool return_menu = false;
    system("CLS");
    cout << "|Choice|===| Sections |===|" << endl;
    cout << "|  1.   ID                |" << endl;
    cout << "|  2.   Name              |" << endl;
    cout << "|  3.   Sex               |" << endl;
    cout << "|  4.   Qizz(1) score     |" << endl;
    cout << "|  5.   QIzz(2) score     |" << endl;
    cout << "|  6.   Mid-term score    |" << endl;
    cout << "|  7.   Final score       |" << endl;
    cout << "|  8.   Return -> Menu    |" << endl;
    cout << "===========================" << endl;
    while(return_menu != true) {
        retry_add_record:
        cout << " Enter your choice: ";
        cin >> choice2;
        if(choice2 < 0 || choice2 > 8) {
            cout << " Error! there are only 8 choices (1 to 8). your input is " << choice2 << " . trygain... " << endl;
            goto retry_add_record;
        }
        if(choice2 == 8) {
            return_menu = true;
        } else {
            student.at(b - 1).add(choice2);
        }
    }
}

void delete_record(int b) {
    int choice2;
    bool return_menu = false;
    system("CLS");
    cout << "|Choice|===| Sections |===|" << endl;
    cout << "|  1.   ID                |" << endl;
    cout << "|  2.   Name              |" << endl;
    cout << "|  3.   Sex               |" << endl;
    cout << "|  4.   Qizz(1) score     |" << endl;
    cout << "|  5.   Qizz(2) score     |" << endl;
    cout << "|  6.   Mid-term score    |" << endl;
    cout << "|  7.   Final score       |" << endl;
    cout << "|  8.   Return -> Menu    |" << endl;
    cout << "===========================" << endl;
    while(return_menu != true) {
        retry_add_record:
        cout << " Enter your choice: ";
        cin >> choice2;
        if(choice2 < 0 || choice2 > 8) {
            cout << " Error! there are only 8 choices (1 to 8). your input is " << choice2 << " . trygain... " << endl;
            goto retry_add_record;
        }
        if(choice2 == 8) {
            return_menu = true;
        } else {
            student.at(b - 1).delete_(choice2);
        }
    }
}

void update_record(int b) {
    int choice2;
    bool return_menu = false;
    system("CLS");
    cout << "|Choice|===| Sections |===|" << endl;
    cout << "|  1.   ID                |" << endl;
    cout << "|  2.   Name              |" << endl;
    cout << "|  3.   Sex               |" << endl;
    cout << "|  4.   Qizz(1) score     |" << endl;
    cout << "|  5.   Qizz(2) score     |" << endl;
    cout << "|  6.   Mid-term score    |" << endl;
    cout << "|  7.   Final score       |" << endl;
    cout << "|  8.   Return -> Menu    |" << endl;
    cout << "===========================" << endl;
    while(return_menu != true) {
        retry_add_record:
        cout << " Enter your choice: ";
        cin >> choice2;
        if(choice2 < 0 || choice2 > 8) {
            cout << " Error! there are only 8 choices (1 to 8). your input is " << choice2 << " . trygain... " << endl;
            goto retry_add_record;
        }
        if(choice2 == 8) {
            return_menu = true;
        } else {
            student.at(b - 1).update(choice2);
        }
    }
}

void view_all() {
    string return_menu;
    system("CLS");
    for(int c = 0; c < student.size(); c++) {
        cout << "|=====|Student Number " << setw(2) << c + 1 << " |=====|" << endl;
        if(student.at(c).get_ID() == -1) {
            cout << "|ID: empty" << endl;
        } else {
            cout << "|ID: " << student.at(c).get_ID() << endl;
        }
            cout << "|Name: " << student.at(c).get_name()<< endl;
            cout << "|Sex: " << student.at(c).get_sex() << endl;
        if(student.at(c).get_qizz1() == -1) {
            cout << "|Qizz(1) score  : empty"<< endl;
        } else {
            cout << "|Qizz(1) score  : " << student.at(c).get_qizz1() << endl;
        }
        if(student.at(c).get_qizz2() == -1) {
            cout << "|Qizz(2) score  : empty"<< endl;
        } else {
            cout << "|Qizz(2) score  : " << student.at(c).get_qizz2() << endl;
        }
        if(student.at(c).get_mid() == -1) {
            cout << "|Mid-term score : empty"<< endl;
        } else {
            cout << "|Mid-term score : " << student.at(c).get_mid() << endl;
        }
        if(student.at(c).get_final() == -1) {
            cout << "|Final score    : empty"<< endl;
        } else {
            cout << "|Final score    : " << student.at(c).get_final() << endl;
        }
        cout << "|Total score    = " << student.at(c).total() << endl;
        cout << "|==============================|" << endl;
    }
    cout << " Return to menu?(yes): ";
    loop1:
    cin >> return_menu;
    if(return_menu != "yes") {
        goto loop1;
    }
}

void display() {
    system("CLS");
    string return_menu;
    for(int c = 0; c < student.size(); c++) {
        highest_score.at(0) = (student.at(c).get_qizz1() > highest_score.at(0)) ? student.at(c).get_qizz1() : highest_score.at(0);
        highest_score.at(1) = (student.at(c).get_qizz2() > highest_score.at(1)) ? student.at(c).get_qizz2() : highest_score.at(1);
        highest_score.at(2) = (student.at(c).get_mid() > highest_score.at(2)) ? student.at(c).get_mid() : highest_score.at(2);
        highest_score.at(3) = (student.at(c).get_final() > highest_score.at(3)) ? student.at(c).get_final() : highest_score.at(3);

        if(student.at(c).get_qizz1() < lowest_score.at(0) || lowest_score.at(0) == -1) {
            lowest_score.at(0) = student.at(c).get_qizz1();
        }

        if(student.at(c).get_qizz2() < lowest_score.at(1) || lowest_score.at(1) == -1) {
            lowest_score.at(1) = student.at(c).get_qizz2();
        }

        if(student.at(c).get_mid() < lowest_score.at(2) || lowest_score.at(2) == -1) {
            lowest_score.at(3) = student.at(c).get_mid();
        }

        if(student.at(c).get_final() < lowest_score.at(3) || lowest_score.at(3) == -1) {
            lowest_score.at(3) = student.at(c).get_final();
        }
    }
    cout << " |term|=====|highest score|=====|lowest score|" << endl;
    cout << " |qizz1" << setw(13) << highest_score.at(0) << setw(19) << ((lowest_score.at(0) == -1) ? 0 : lowest_score.at(0)) << "      |" << endl;
    cout << " |qizz2" << setw(13) << highest_score.at(1) << setw(19) << ((lowest_score.at(1) == -1) ? 0 : lowest_score.at(1)) << "      |" << endl;
    cout << " |mid-term" << setw(10) << highest_score.at(2) << setw(19) << ((lowest_score.at(2) == -1) ? 0 : lowest_score.at(2)) << "      |" << endl;
    cout << " |final" << setw(13) << highest_score.at(3) << setw(19) << ((lowest_score.at(3) == -1) ? 0 : lowest_score.at(3)) << "      |" << endl;
    cout << " Return to menu?(yes): ";
    loop2:
    cin >> return_menu;
    if(return_menu != "yes") {
        goto loop2;
    }
}

void sort_id() {
    for(int b = 0; b < student.size(); b++) {
        for(int c = 0; c < student.size(); c++) {
            Student temp;
            if(c != student.size() - 1) {
                if(student.at(c).get_ID() < student.at(c + 1).get_ID()) {
                    temp = student.at(c);
                    student.at(c) = student.at(c + 1);
                    student.at(c + 1) = temp;
                }
            }
        }
    }
}

void sort_total() {
    for(int b = 0; b < student.size(); b++) {
        for(int c = 0; c < student.size(); c++) {
            Student temp;
            if(c != student.size() - 1) {
                if(student.at(c).total() < student.at(c + 1).total()) {
                    temp = student.at(c);
                    student.at(c) = student.at(c + 1);
                    student.at(c + 1) = temp;
                }
            }
        }
    }
}

int get_student() {
    int slct_student;
    retry_get_student:
    cout << " Enter student number (1 - " << student.size() << "): ";
    cin >> slct_student;
    if(slct_student < 1 || slct_student > student.size()) {
        cout << " Error! there are " << student.size() << " students. your input is " << slct_student << " . tryagain... " << endl;
        goto retry_get_student;
    }
    return slct_student;
}

int main() {
    int choice;
    bool exit = false;
    int slct_student;
    while(exit != true) {
        system("CLS");
        cout << "|====================| MENU |================================|" << endl;
        cout << "|Choice|=========| Descriptions | ===========================|" << endl;
        cout << "| 1.     Add student records                                 |" << endl;
        cout << "| 2.     Delete student records                              |" << endl;
        cout << "| 3.     Update student records                              |" << endl;
        cout << "| 4.     View all student records                            |" << endl;
        cout << "| 5.     Calculate an average of a selected student’s scores |" << endl;
        cout << "| 6.     Calculate total scores of a selected student        |" << endl;
        cout << "| 7.     Display the highest and lowest scores               |" << endl;
        cout << "| 8.     Sort students' records by ID                        |" << endl;
        cout << "| 9.     Sort students' records by total score               |" << endl;
        cout << "| 10.    Save all records to file                            |" << endl;
        cout << "| 11.    Load all records from file                          |" << endl;
        cout << "| 12.    Exit.                                               |" << endl;
        cout << "|============================================================|" << endl;
        retry_main:
        cout << " Enter your choice: ";
        cin >> choice;
        if(choice < 1 || choice > 12) {
            cout << " Error! there are 12 choices(1 - 12). your choice is " << choice << ". trygain... " << endl;
            goto retry_main;
        }
        switch(choice) {
        case 1:
            add_record(get_student());
            break;
        case 2:
            delete_record(get_student());
            break;
        case 3:
            update_record(get_student());
            break;
        case 4:
            view_all();
            break;
        case 5: {
            int slct_student_main1 = get_student();
            cout << "Average score of student "  << slct_student_main1 << " is " << student.at(slct_student_main1).average() << endl;
            break;
        }
        case 6: {
            int slct_student_main2 = get_student();
            cout << "Total score of student " << slct_student_main2 << " is " << student.at(slct_student_main2).total() << endl;
            break;
        }
        case 7:
            display();
            break;
        case 8:
            sort_id();
            cout << " done." << endl;
            goto retry_main;
        case 9:
            sort_total();
            cout << " done." << endl;
            goto retry_main;
        case 10:
            break;
        case 11:
            break;
        case 12:
            exit = true;
            break;
        }
    }
}
