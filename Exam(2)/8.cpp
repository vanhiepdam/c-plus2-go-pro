#include <iostream>

using namespace std;

int main()
{
    short choice;
    int width, height, square;
    int triangle1, triangle2 = 1;
    cout << "Type 1 to display rectangle\nType 2 to display square\nType 3 to display Isosceles Triangle\nChoose type of geometry you wanna draw: ";
    cin >> choice;
    if(choice == 1) {
        cout << "Input for rectangle\n (width height)" << endl;
        cin >> width >> height;
        for(int countNumber = 1; countNumber <= height; countNumber++) {
            for(int countNumber = 1; countNumber <= width; countNumber++) cout << "* ";
            cout << endl;
        }
    }
        else if(choice == 2) {
            cout << "Input for square" << endl;
            cin >> square;
            for(int countNumber = 1; countNumber <= square; countNumber++) {
                for(int countNumber = 1; countNumber <= square; countNumber++) cout << "* ";
                cout << endl;
            }
        }
            else if(choice == 3) {
                cout << "Input for triangle: ";
                cin >> triangle1;
                triangle1++;
                while(triangle2 <= triangle1) {
                    for(int countNumber = 0; countNumber < triangle1 - triangle2;countNumber++) cout << " ";
                    for(int countNumber = 1; countNumber < triangle2; countNumber++) cout << "* ";
                    cout << endl;
                    triangle2++;
                }
            }
}
