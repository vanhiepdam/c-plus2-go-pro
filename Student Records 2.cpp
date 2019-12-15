#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
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
    Student(long long c1 = -1, string c2 = "empty", string c3 = "empty", double c4 = -1, double c5 = -1, double c6 = -1, double c7 = -1, double c8 = -1) {
        ID = c1;
        name = c2;
        sex = c3;
        qizz1 = c4;
        qizz2 = c5;
        mid_ = c6;
        final_ = c7;
        total_ = c8;
    }
    string get_print_line(){
        string print_line = to_string(this->ID) + ',' + this-> name + ',' + this->sex + ',' + to_string(this->qizz1) + ',' + to_string(this->qizz2) + ',' + to_string(this->mid_) + ',' + to_string(this->final_) + ',' + to_string(this->total_);
        return print_line;
    }
    void add(int section) {
        switch(section) {
        case 1:
            cout << " Enter ID: ";
            if(this->ID != -1) {
                cout << " Error!: ID is already existed, if you wish to update it use update function" << endl;
            } else {
                cin >> this->ID;
            }
            break;
        case 2:
            cout << " Enter name: ";
            if(this->name == "empty") {
                cin.ignore();
                getline(std::cin, this->name);
            } else {
                cout << " Error!: Name is already existed, if you wish to update it use update function" << endl;
            }
            break;
        case 3:
            cout << " Enter sex: ";
            if(this->sex == "empty") {
                cin.ignore();
                getline(std::cin, this->sex);
            } else {
                cout << " Error!: Sex is already existed, if you wish to update it use the update function" << endl;
            }
            break;
        case 4:
            cout << " Enter qizzes 1 score: ";
            if(this->qizz1 != -1) {
                cout << " Error!: Qizz(1) is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> this->qizz1;
            }
            break;
        case 5:
            cout << " Enter qizzes 2 score: ";
            if(this->qizz2 != -1) {
                cout << " Error!: Qizz(2) is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> this->qizz2;
            }
            break;
        case 6:
            cout << " Enter mid-term score: ";
            if(this->mid_ != -1) {
                cout << " Error!: Mid-term score is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> this->mid_;
            }
            break;
        case 7:
            cout << " Enter final score: ";
            if(this->final_ != -1) {
                cout << " Error!: Final score is already existed, if you wish to update it use the update function" << endl;
            } else {
                cin >> this->final_;
            }
            break;
        }
    }
    void update_total() {
        total_ = 0;
        if(this->qizz1 != -1) {
            total_ += this->qizz1;
        }
        if(this->qizz2 != -1) {
            total_ += this->qizz2;
        }
        if(this->mid_ != -1) {
            total_ += this->mid_;
        }
        if(this->final_ != -1) {
            total_ += this->final_;
        }
    }
    void update(int section) {
        switch(section) {
        case 1:
            if(this->ID == -1) {
                cout << " Error!: ID is empty, perhaps add it first.. ?" << endl;;
            } else {
                cout << " Enter ID: ";
                cin >> this->ID;
            }
            break;
        case 2:
            if(this->name == "empty") {
                cout << " Error!: Name is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter name: ";
                cin >> this->name;
            }
            break;
        case 3:
            if(this->sex == "empty") {
                cout << " Error!: Sex is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter sex: ";
                cin >> this->sex;
            }
            break;
        case 4:
            if(this->qizz1 == -1) {
                cout << " Error!: Qizz(1) score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter qizzes 1 score: ";
                cin >> this->qizz1;
            }
            break;
        case 5:
            if(this->qizz2 == -1) {
                cout << " Error!: Qizz(2) score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter qizzes 2 score: ";
                cin >> this->qizz2;
            }
            break;
        case 6:
            if(this->mid_ == -1) {
                cout << " Error!: Mid-term score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter mid-term score: ";
                cin >> this->mid_;
            }
            break;
        case 7:
            if(this->final_ == -1) {
                cout << " Error!: Final score is empty, perhaps add it first.. ?" << endl;
            } else {
                cout << " Enter final score: ";
                cin >> this->final_;
            }
            break;
        }
    }
    void delete_(int section) {
        switch(section) {
        case 1:
            this->ID = -1;
            break;
        case 2:
            this->name = "empty";
            break;
        case 3:
            this->sex = "empty";
            break;
        case 4:
            this->qizz1 = -1;
            break;
        case 5:
            this->qizz2 = -1;
            break;
        case 6:
            this->mid_ = -1;
            break;
        case 7:
            this->final_ = -1;
            break;
        }
    }
    double total() {
        total_ = 0;
        if(this->qizz1 != -1) {
            total_ += this->qizz1;
        }
        if(this->qizz2 != -1) {
            total_ += this->qizz2;
        }
        if(this->mid_ != -1) {
            total_ += this->mid_;
        }
        if(this->final_ != -1) {
            total_ += this->final_;
        }
        return total_;
    }
    double average() {
        double average = 0;
        double divisor = 0;
        if(this->qizz1 != -1) {
            divisor ++;
            average += this->qizz1;
        }
        if(this->qizz2 != -1) {
            divisor ++;
            average += this->qizz2;
        }
        if(this->qizz1 != -1) {
            divisor ++;
            average += this->mid_;
        }
        if(this->qizz1 != -1) {
            divisor ++;
            average += this->final_;
        }
        return average / divisor;
    }
    long long get_ID() {
        return this->ID;
    }
    string get_name() {
        return this->name;
    }
    string get_sex() {
        return this->sex;
    }
    int get_qizz1() {
        return this->qizz1;
    }
    int get_qizz2() {
        return this->qizz2;
    }
    int get_mid() {
        return this->mid_;
    }
    int get_final() {
        return this->final_;
    }
    void set_ID(long long x) {
        this->ID = x;
    }
    void set_name(string x) {
        name = x;
    }
    void set_sex(string x) {
        this->sex = x;
    }
    void set_qizz1(double x) {
        this->qizz1 = x;
    }
    void set_qizz2(double x) {
        this->qizz2 = x;
    }
    void set_mid(double x) {
        this->mid_ = x;
    }
    void set_final(double x) {
        this->final_ = x;
    }
};

vector<Student> student(hmm);

class Program{
    public:
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
                    lowest_score.at(2) = student.at(c).get_mid();
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
                    if(c != student.size() - 1) {
                        if(student.at(c).get_ID() < student.at(c + 1).get_ID()) {

                            long long sort_long_temp = student.at(c).get_ID();
                            student.at(c).set_ID(student.at(c + 1).get_ID());
                            student.at(c + 1).set_ID(sort_long_temp);

                            string sort_string_temp = student.at(c).get_name();
                            student.at(c).set_name(student.at(c + 1).get_name());
                            student.at(c + 1).set_name(sort_string_temp);
                            sort_string_temp = student.at(c).get_sex();
                            student.at(c).set_sex(student.at(c + 1).get_sex());
                            student.at(c + 1).set_sex(sort_string_temp);

                            double sort_double_temp = student.at(c).get_qizz1();
                            student.at(c).set_qizz1(student.at(c + 1).get_qizz1());
                            student.at(c + 1).set_qizz1(sort_double_temp);
                            sort_double_temp = student.at(c).get_qizz2();
                            student.at(c).set_qizz2(student.at(c + 1).get_qizz2());
                            student.at(c + 1).set_qizz2(sort_double_temp);
                            sort_double_temp = student.at(c).get_mid();
                            student.at(c).set_mid(student.at(c + 1).get_mid());
                            student.at(c + 1).set_mid(sort_double_temp);
                            sort_double_temp = student.at(c).get_final();
                            student.at(c).set_final(student.at(c + 1).get_final());
                            student.at(c + 1).set_final(sort_double_temp);
                        }
                    }
                }
            }
        }

        void sort_total() {
            for(int b = 0; b < student.size(); b++) {
                for(int c = 0; c < student.size(); c++) {
                    if(c != student.size() - 1) {
                        if(student.at(c).total() < student.at(c + 1).total()) {

                            long long sort_long_temp = student.at(c).get_ID();
                            student.at(c).set_ID(student.at(c + 1).get_ID());
                            student.at(c + 1).set_ID(sort_long_temp);

                            string sort_string_temp = student.at(c).get_name();
                            student.at(c).set_name(student.at(c + 1).get_name());
                            student.at(c + 1).set_name(sort_string_temp);
                            sort_string_temp = student.at(c).get_sex();
                            student.at(c).set_sex(student.at(c + 1).get_sex());
                            student.at(c + 1).set_sex(sort_string_temp);

                            double sort_double_temp = student.at(c).get_qizz1();
                            student.at(c).set_qizz1(student.at(c + 1).get_qizz1());
                            student.at(c + 1).set_qizz1(sort_double_temp);
                            sort_double_temp = student.at(c).get_qizz2();
                            student.at(c).set_qizz2(student.at(c + 1).get_qizz2());
                            student.at(c + 1).set_qizz2(sort_double_temp);
                            sort_double_temp = student.at(c).get_mid();
                            student.at(c).set_mid(student.at(c + 1).get_mid());
                            student.at(c + 1).set_mid(sort_double_temp);
                            sort_double_temp = student.at(c).get_final();
                            student.at(c).set_final(student.at(c + 1).get_final());
                            student.at(c + 1).set_final(sort_double_temp);
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

        void save_() {
            ofstream save;
            save.open("save.text");
            if(save.good()) {
                for(int c = 0; c < student.size(); c++) {
                    save << student.at(c).get_print_line() << endl;
                }
            } else {
                cout << " Error! Unable to save file!" << endl;
            }
            save.close();
        }

        void load_() {
            int load_student = 0;
            string load_line;
            string load_ID;
            string load_name;
            string load_sex;
            string load_qizz1;
            string load_qizz2;
            string load_mid_;
            string load_final_;
            ifstream f;
            f.open("save.text");
            if(f.good()) {
                while(getline(f, load_line)) {
                    stringstream f(load_line);
                    getline(f, load_ID, ',');
                    getline(f, load_name, ',');
                    getline(f, load_sex, ',');
                    getline(f, load_qizz1, ',');
                    getline(f, load_qizz2, ',');
                    getline(f, load_mid_, ',');
                    getline(f, load_final_, ',');
                    student.at(load_student).set_ID(stoll(load_ID));
                    student.at(load_student).set_name(load_name);
                    student.at(load_student).set_sex(load_sex);
                    student.at(load_student).set_qizz1(stod(load_qizz1));
                    student.at(load_student).set_qizz2(stod(load_qizz2));
                    student.at(load_student).set_mid(stod(load_mid_));
                    student.at(load_student).set_final(stod(load_final_));
                    load_student++;
                }
            } else {
                cout << " Error! Unable to load file!" << endl;
            }
            f.close();
        }
};


int main() {
    Program main_program;
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
        cout << "| 5.     Calculate an average of a selected students scores  |" << endl;
        cout << "| 6.     Calculate total scores of a selected student        |" << endl;
        cout << "| 7.     Display the highest and lowest scores               |" << endl;
        cout << "| 8.     Sort students records by ID                         |" << endl;
        cout << "| 9.     Sort students records by total score                |" << endl;
        cout << "| 10.    Save all records to file                            |" << endl;
        cout << "| 11.    Load all records from file                          |" << endl;
        cout << "| 12.    Exit.                                               |" << endl;
        cout << "|============================================================|" << endl;
        main_choice:
        cout << " Enter your choice: ";
        cin >> choice;
        if(choice < 1 || choice > 12) {
            cout << " Error! there are 12 choices(1 - 12). your choice is " << choice << ". try again... " << endl;
            continue;
        }
        int main_slct_student;
        switch(choice) {
            case 1:
                main_program.add_record(main_program.get_student());
                break;
            case 2:
                main_program.delete_record(main_program.get_student());
                break;
            case 3:
                main_program.update_record(main_program.get_student());
                break;
            case 4:
                main_program.view_all();
                break;
            case 5: {
                main_slct_student = main_program.get_student();
                cout << " Average score of student "  << main_slct_student << " is " << student.at(main_slct_student - 1).average() << endl;
                goto main_choice;
                break;
            }
            case 6: {
                main_slct_student = main_program.get_student();
                cout << " Total score of student " << main_slct_student << " is " << student.at(main_slct_student - 1).total() << endl;
                goto main_choice;
                break;
            }
            case 7:
                main_program.display();
                break;
            case 8:
                main_program.sort_id();
                cout << " done." << endl;
                goto main_choice;
                break;
            case 9:
                main_program.sort_total();
                cout << " done." << endl;
                goto main_choice;
                break;
            case 10:
                main_program.save_();
                goto main_choice;
                break;
            case 11:
                main_program.load_();
                goto main_choice;
                break;
            case 12:
                exit = true;
                break;
            }
    }
}
