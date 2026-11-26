// Task 1 - Section 1
// برنامج ياخد بيانات طالب (الاسم الكامل، ID، الدرجة)
// ويعمل ملف جديد اسمه Student ويكتب فيه البيانات

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string name; int id; float grade;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your grade: ";
    cin >> grade;
    ofstream myfile("Student.txt");
    myfile << "Name: " << name << endl;
    myfile << "ID: " << id << endl;
    myfile << "Grade: " << grade << endl;
    myfile.close();
    cout << "Data saved to Student.txt" << endl;
    return 0;
}
