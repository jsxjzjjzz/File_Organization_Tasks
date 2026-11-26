// Task 5 (Lab 2) - Section 5
// سجلات طلبة (اسم char[20]، ID، درجة) في students.txt
// يفضل يضيف طول ما المستخدم كاتب y، وكل سجل بينتهي بعلامة $

#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream f("students.txt", ios::app);
    char name[20]; int id; float grade; char more = 'y';
    while (more == 'y' || more == 'Y') {
        cout << "Enter name: ";
        cin.getline(name, 20);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter grade: ";
        cin >> grade;
        f << name << ", " << id << ", " << grade << " $" << endl;
        cout << "Add more? (y/n): ";
        cin >> more;
        cin.ignore();
    }
    f.close();
    cout << "Records saved to students.txt" << endl;
    return 0;
}
