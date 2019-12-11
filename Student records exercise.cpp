#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

// global variables
    // number of student
    int n = 20;
    //
    vector<int> student(n);
    vector<long long> ID(n);
    vector<string> name(n);
    vector<string> sex(n);
    vector<float> qizz1(n, -1);
    vector<float> qizz2(n, -1);
    vector<float> mid_score(n, -1);
    vector<float> final_score(n, -1);
    vector<float> total_score(n);
    vector<float> highest_score(4);
    vector<float> lowest_score(4);

void save_record() {
    ofstream save;
    save.open("ID.text");
    for(int c = 0; c < n; c++) {
        save << ID.at(c) << endl;
    }
    save.close();
    save.open("name.text");
    for(int c = 0; c < n; c++) {
        save << name.at(c) << endl;
    }
    save.close();
    save.open("sex.text");
    for(int c = 0; c < n; c++) {
        save << sex.at(c) << endl;
    }
    save.close();
    save.open("qizz1_score.text");
    for(int c = 0; c < n; c++) {
        save << qizz1.at(c) << endl;
    }
    save.close();
    save.open("qizz2_score.text");
    for(int c = 0; c < n; c++) {
        save << qizz2.at(c) << endl;
    }
    save.close();
    save.open("mid_score.text");
    for(int c = 0; c < n; c++) {
        save << mid_score.at(c) << endl;
    }
    save.close();
    save.open("final_score.text");
    for(int c = 0; c < n; c++) {
        save << final_score.at(c) << endl;
    }
    save.close();
    save.open("total_score.text");
    for(int c = 0; c < n; c++) {
        save << total_score.at(c) << endl;
    }
    save.close();
    cout << "done." << endl;
}

void load_record() {
    ifstream load;
    load.open("ID.text");
    for(int c = 0; c < n; c++) {
        load >> ID.at(c);
    }
    load.close();
    load.open("name.text");
    for(int c = 0; c < n; c++) {
        load >> name.at(c);
    }
    load.close();
    load.open("sex.text");
    for(int c = 0; c < n; c++) {
        load >> sex.at(c);
    }
    load.close();
    load.open("qizz1_score.text");
    for(int c = 0; c < n; c++) {
        load >> qizz1.at(c);
    }
    load.close();
    load.open("qizz2_score.text");
    for(int c = 0; c < n; c++) {
        load >> qizz2.at(c);
    }
    load.close();
    load.open("mid_score.text");
    for(int c = 0; c < n; c++) {
        load >> mid_score.at(c);
    }
    load.close();
    load.open("final_score.text");
    for(int c = 0; c < n; c++) {
        load >> final_score.at(c);
    }
    load.close();
    load.open("total_score.text");
    for(int c = 0; c < n; c++) {
        load >> total_score.at(c);
    }
    load.close();
    cout << "done." << endl;
}

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
    float score;
    cout << "input score: ";
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

void average_score() {
    int selected_student;
    tryagain3:
    cout << "input student number: ";
    cin >> selected_student;
    int a = 0;
    int b = 4;
    if(qizz1.at(selected_student) == -1) {
        b--;
    } else {
        a += qizz1.at(selected_student);
    }
    if(qizz2.at(selected_student) == -1) {
        b--;
    } else {
        a += qizz2.at(selected_student);
        }
    if(mid_score.at(selected_student) == -1) {
        b--;
    } else {
        a += mid_score.at(selected_student);
        }
    if(final_score.at(selected_student) == -1) {
        b--;
    } else {
        a += final_score.at(selected_student);
        }
    if(b == 0) {
        cout << "scores of student " << selected_student << " are empty." << endl;
        cout << "return to menu ... .. . " << endl;
        return;
    }
    if(selected_student < 0 || selected_student > n) {
        cout << "input is out of range .. tryagain..." << endl;
        goto tryagain3;
    } else {
        cout << "average score of student " << selected_student << " is " << a / b << endl;
        cout << "return to menu ... .. . " << endl;
    }
}

void total_score_view() {
    cout << "input student number: ";
    int selected_student;
    cin >> selected_student;
    cout << "total score of student number " << selected_student << " is " << total_score.at(selected_student) << endl;
}

void display_score() {
    vector<int> student_number_highest(n);
    vector<int> student_number_lowest(n);
    for(int c = 0; c < n; c++) {
        if(qizz1.at(c) > highest_score.at(0)) {
            highest_score.at(0) = qizz1.at(c);
            student_number_highest.at(0) = c;
        }
        if(qizz2.at(c) > highest_score.at(1)) {
            highest_score.at(1) = qizz2.at(c);
            student_number_highest.at(1) = c;
        }
        if(mid_score.at(c) > highest_score.at(2)) {
            highest_score.at(2) = mid_score.at(c);
            student_number_highest.at(2) = c;
        }
        if(final_score.at(c) > highest_score.at(3)) {
            highest_score.at(3) = final_score.at(c);
            student_number_highest.at(3) = c;
        }
    }
    lowest_score = highest_score;
    for(int c = 0; c < n; c++) {
        if(qizz1.at(c) < lowest_score.at(0) && qizz1.at(c) != -1) {
            lowest_score.at(0) = qizz1.at(c);
            student_number_lowest.at(0) = c;
        }
        if(qizz2.at(c) < lowest_score.at(1) && qizz2.at(c) != -1) {
            lowest_score.at(1) = qizz2.at(c);
            student_number_lowest.at(1) = c;
        }
        if(mid_score.at(c) < lowest_score.at(2) && mid_score.at(c) != -1) {
            lowest_score.at(2) = mid_score.at(c);
            student_number_lowest.at(2) = c;
        }
        if(final_score.at(c) < lowest_score.at(3) && final_score.at(c) != -1) {
            lowest_score.at(3) = final_score.at(c);
            student_number_lowest.at(3 ) = c;
        }
    }
    cout << "|term|    |highest score|    |lowest score|" << endl << endl;

    cout << "qizz1" << setw(13) << highest_score.at(0) << setw(19) << lowest_score.at(0) << endl << endl;
    cout << "qizz2" << setw(13) << highest_score.at(1) << setw(19) << lowest_score.at(1) << endl << endl;
    cout << "mid-term" << setw(10) << highest_score.at(2) << setw(19) << lowest_score.at(2) << endl << endl;
    cout << "final" << setw(13) << highest_score.at(3) << setw(19) << lowest_score.at(3) << endl << endl;
}

void id_sort() {
    long long temp_ID;
    float temp_score;
    string temp_string;
    for(int c = 0; c < n; c++) {
        for(int d = c; d > 0; d--) {
            if(ID.at(d) != 0) {
                if(ID.at(d) < ID.at(d - 1) || ID.at(d - 1 ) == 0) {
                    temp_ID = ID.at(d);
                    ID.at(d) = ID.at(d - 1);
                    ID.at(d - 1) = temp_ID;

                    temp_string = name.at(d);
                    name.at(d) = name.at(d - 1);
                    name.at(d - 1) = temp_string;

                    temp_string = sex.at(d);
                    sex.at(d) = sex.at(d - 1);
                    sex.at(d - 1) = temp_string;

                    temp_score = qizz1.at(d);
                    qizz1.at(d) = qizz1.at(d - 1);
                    qizz1.at(d - 1) = temp_score;

                    temp_score = qizz2.at(d);
                    qizz2.at(d) = qizz2.at(d - 1);
                    qizz2.at(d - 1) = temp_score;

                    temp_score = mid_score.at(d);
                    mid_score.at(d) = mid_score.at(d - 1);
                    mid_score.at(d - 1) = temp_score;

                    temp_score = final_score.at(d);
                    final_score.at(d) = final_score.at(d - 1);
                    final_score.at(d - 1) = temp_score;

                    temp_score = total_score.at(d);
                    total_score.at(d) = total_score.at(d - 1);
                    total_score.at(d - 1) = temp_score;
                }
            }
        }
    }
    cout << "done." << endl;
    cout << "return to menu ... .. ." << endl;
}

void total_score_sort() {
    long long temp_ID;
    float temp_score;
    string temp_string;
    for(int c = 0; c < n; c++) {
        for(int d = c; d > 0; d--) {
            if(total_score.at(d) != 0) {
                if(total_score.at(d) > total_score.at(d - 1) || total_score.at(d - 1 ) == 0) {
                    temp_ID = ID.at(d);
                    ID.at(d) = ID.at(d - 1);
                    ID.at(d - 1) = temp_ID;

                    temp_string = name.at(d);
                    name.at(d) = name.at(d - 1);
                    name.at(d - 1) = temp_string;

                    temp_string = sex.at(d);
                    sex.at(d) = sex.at(d - 1);
                    sex.at(d - 1) = temp_string;

                    temp_score = qizz1.at(d);
                    qizz1.at(d) = qizz1.at(d - 1);
                    qizz1.at(d - 1) = temp_score;

                    temp_score = qizz2.at(d);
                    qizz2.at(d) = qizz2.at(d - 1);
                    qizz2.at(d - 1) = temp_score;

                    temp_score = mid_score.at(d);
                    mid_score.at(d) = mid_score.at(d - 1);
                    mid_score.at(d - 1) = temp_score;

                    temp_score = final_score.at(d);
                    final_score.at(d) = final_score.at(d - 1);
                    final_score.at(d - 1) = temp_score;

                    temp_score = total_score.at(d);
                    total_score.at(d) = total_score.at(d - 1);
                    total_score.at(d - 1) = temp_score;
                }
            }
        }
    }
    cout << "done." << endl;
    cout << "return to menu ... .. ." << endl;
}

int main() {
    cout << "===================================================" << "\n\n";

    cout << "                       MENU                        " << "\n\n";

    cout << "===================================================" << "\n\n";

    cout << "1.     Add student records" << "\n\n";

    cout << "2.     Delete student records" << "\n\n";

    cout << "3.     Update student records" << "\n\n";

    cout << "4.     View all student records" << "\n\n";

    cout << "5.     Calculate an average of a selected student scores" << "\n\n";

    cout << "6.     Calculate total scores of a selected student" << "\n\n";

    cout << "7.     Display the highest and lowest scores" << "\n\n";

    cout << "8.     Sort students records by ID" << "\n\n";

    cout << "9.     Sort students records by total score" << "\n\n";

    cout << "10.    Save all record to file" << "\n\n";

    cout << "11.    Load record from saved file" << "\n\n";

    cout << "   there are 7 section contain" << "\n\n";

    cout << "   1(ID)              2(name)              3(sex)" << "\n\n";

    cout << "   4(qizzes score 1)  5(qizzes score 2)    6(mid-term score)" << "\n\n";

    cout << "   7(final score)" << "\n";

    cout << "=== input only take numbers. in range of 1 & 9! ===" << "\n\n";

    int choice;
    retry:
    cout << "menu: ";
    while(true) {
        cin >> choice;
        if(choice < 1 || choice > 11) {
            cout << "what is wrong with you? read the description!";
            goto retry;
        }
        switch(choice) {
            case 1:
                add_record();
                cout << "menu: ";
                break;
            case 2:
                delete_record();
                cout << "menu: ";
                break;
            case 3:
                add_record();
                cout << "menu: ";
                break;
            case 4:
                view_student_record();
                cout << "menu: ";
                break;
            case 5:
                average_score();
                cout << "menu: ";
                break;
            case 6:
                total_score_view();
                cout << "menu: ";
                break;
            case 7:
                display_score();
                cout << "menu: ";
                break;
            case 8:
                id_sort();
                cout << "menu: ";
                break;
            case 9:
                total_score_sort();
                cout << "menu: ";
                break;
            case 10:
                save_record();
                cout << "menu: ";
                break;
            case 11:
                load_record();
                cout << "menu: ";
                break;
        }
    }
}
