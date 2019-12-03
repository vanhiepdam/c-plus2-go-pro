#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// global variables
    // number of student
    int n = 20;
    //
    vector<int> student(n);
    vector<long long> ID(n);
    vector<string> name(n);
    vector<string> sex(n);
    vector<int> qizz1(n);
    vector<int> qizz2(n);
    vector<int> mid_score(n);
    vector<int> final_score(n);
    vector<int> total_score(n);

// add record



void fix_ID(int student_index) {
    cout << "input id: ";
    long long value;
    cin >> value;
    ID.at(student_index) = value;
}

void fix_name(int student) {
    cin.ignore();
    cout << "input name: ";
    string input_name;
    getline(cin, input_name);
    name.at(student) = input_name;
}

void fix_sex(int student) {
    cout << "input sex 1 = male / 2 = female: ";
    int input;
    tryagain:
    cin >> input;
    if(input == 1) {
        sex.at(student) = "male";
    } else if(input == 2) {
        sex.at(student) = "female";
    } else {
        cout << "just input 1 or 2\ntryagain: ";
        goto tryagain;
    }
}

void fix_score(int student, int v) {
    int score;
    cout << "inpute score: ";
    tryagain2:
    cin >> score;
    if(score < 0) {
        cout << "negative score?"<< endl;
        cout << "tryagain: ";
        goto tryagain2;
    }
    switch(v) {
        case 1:
            qizz1.at(student) = score;
            break;
        case 2:
            qizz2.at(student) = score;
            break;
        case 3:
            mid_score.at(student) = score;
            break;
        case 4:
            final_score.at(student) = score;
            break;
    }
}
void add_record() {
    int selection;
    int selected_student;
    cout << "input student number: ";
    cin >> selected_student;
    cout << "input section: ";
    cin >> selection;
    switch(selection) {
        case 1:
            fix_ID(selected_student);
            break;
        case 2:
            fix_name(selected_student);
            break;
        case 3:
            fix_sex(selected_student);
            break;
        case 4:
            fix_score(selected_student, 1);
            break;
        case 5:
            fix_score(selected_student, 2);
            break;
        case 6:
            fix_score(selected_student, 3);
            break;
        case 7:
            fix_score(selected_student, 4);
            break;
    }
    total_score.at(selected_student) = qizz1.at(selected_student) + qizz2.at(selected_student) + mid_score.at(selected_student) + final_score.at(selected_student);
    cout << "return to menu ... .. . " << endl;
}
// delete record

void delete_record() {
    int selection;
    int selected_student;
    cout << "input student number: ";
    cin >> selected_student;
    cout << "input section: ";
    cin >> selection;
    switch(selection) {
        case 1:
            ID.at(selected_student) = -1;
            break;
        case 2:
            name.at(selected_student).clear();
            break;
        case 3:
            sex.at(selected_student).clear();
            break;
        case 4:
            qizz1.at(selected_student) = -1;
            break;
        case 5:
            qizz2.at(selected_student) = -1;
            break;
        case 6:
            mid_score.at(selected_student) = -1;
            break;
        case 7:
            final_score.at(selected_student) = -1;
            break;
    }
    total_score.at(selected_student) = 0;
    if(qizz1.at(selected_student) != -1) {
        total_score.at(selected_student) += qizz1.at(selected_student);
    }
    if(qizz2.at(selected_student) != -1) {
        total_score.at(selected_student) += qizz2.at(selected_student);
    }
    if(mid_score.at(selected_student) != -1) {
        total_score.at(selected_student) += mid_score.at(selected_student);
    }
    if(final_score.at(selected_student) != -1) {
        total_score.at(selected_student) += final_score.at(selected_student);
    }
    cout << "return to menu ... .. . " << endl;
}

// view all student records.

void view_student_record() {
    for(int c = 0; c < student.size(); c++) {
        cout << "student number: " << c << endl;
        if(ID.at(c) == -1 || ID.at(c) == 0) {
            cout << "ID: empty" << endl;
        } else {
            cout << "ID: " << ID.at(c) << endl;
        }
        if(name.at(c).empty()) {
            cout << "name: empty" << endl;
        } else {
            cout << "name: " << name.at(c) << endl;
        }
        if(sex.at(c).empty()) {
            cout << "sex: empty" << endl;
        } else {
            cout << "sex: " << sex.at(c) << endl;
        }
        if(qizz1.at(c) == -1 || qizz1.at(c) == 0) {
            cout << "qizzes score 1: empty" << endl;
        } else {
            cout << "qizzes score 1: " << qizz1.at(c) << endl;
        }
        if(qizz2.at(c) == -1 || qizz2.at(c) == 0) {
            cout << "qizzes score 2: empty" << endl;
        } else {
            cout << "qizzes score 2: " << qizz2.at(c) << endl;
        }
        if(mid_score.at(c) == -1 || mid_score.at(c) == 0) {
            cout << "mid-term score: empty" << endl;
        } else {
            cout << "mid-term score: " << mid_score.at(c) << endl;
        }
        if(final_score.at(c) == -1 || final_score.at(c) == 0) {
            cout << "final score: empty" << endl;
        } else {
            cout << "final score: " << final_score.at(c) << endl;
        }
        cout << "total score: " << total_score.at(c) << endl << endl;
    }
    cout << "return to menu ... .. . " << endl;
}

int main() {
    cout << "===================================================" << "\n\n";

    cout << "                       MENU                        " << "\n\n";

    cout << "===================================================" << "\n\n";

    cout << "1.     Add student records" << "\n\n";

    cout << "2.     Delete student records" << "\n\n";

    cout << "3.     Update student records" << "\n\n";

    cout << "4.     View all student records" << "\n\n";

    cout << "5.     Calculate an average of a selected student’s scores" << "\n\n";

    cout << "6.     Calculate total scores of a selected student" << "\n\n";

    cout << "7.     Display the highest and lowest scores" << "\n\n";

    cout << "8.     Sort students’ records by ID" << "\n\n";

    cout << "9.     Sort students' records by total score" << "\n\n";

    cout << "   there are 8 section contain" << "\n\n";

    cout << "   1(ID)              2(name)              3(sex)" << "\n\n";

    cout << "   4(qizzes score 1)  5(qizzes score 2)    6(mid-term score)" << "\n\n";

    cout << "   7(final score)     8(total score)" << "\n";

    cout << "=== input only take numbers. in range of 1 & 9! ===" << "\n\n";

    int choice;
    retry:
    while(cin >> choice) {
        if(choice < 1 || choice > 9) {
            cout << "what is wrong with you? read the description!";
            goto retry;
        }
        switch(choice) {
            case 1:
                add_record();
                break;
            case 2:
                delete_record();
                break;
            case 3:
                add_record();
                break;
            case 4:
                view_student_record();
                break;
        }
    }
}
