// Task 6 (Student Task) - Section 6
// 1- ينشئ grades.txt ويكتب 5 درجات
// 2- يقراهم باللوب الصح  3- يمسح درجة بملف مؤقت
// 4- يبدل الملف الأصلي ويطبع رسالة نجاح/خطأ

#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main() {
    ofstream out("grades.txt");
    out << 10 << endl << 20 << endl << 30 << endl << 40 << endl << 50 << endl;
    out.close();

    ifstream in("grades.txt");
    if (in.fail()) { cout << "Unable to open the file" << endl; return 1; }
    int g;
    cout << "Grades: ";
    while (in >> g) cout << g << " ";
    cout << endl;
    in.close();

    int del;
    cout << "Enter a grade to delete: ";
    cin >> del;

    ifstream src("grades.txt");
    ofstream temp("temp.txt");
    bool found = false;
    while (src >> g) {
        if (g == del && !found) { found = true; continue; }
        temp << g << endl;
    }
    src.close();
    temp.close();

    if (found && remove("grades.txt") == 0 && rename("temp.txt", "grades.txt") == 0)
        cout << "Grade deleted successfully" << endl;
    else
        cout << "Error: grade not found or file problem" << endl;

    ifstream show("grades.txt");
    cout << "Grades after deletion: ";
    while (show >> g) cout << g << " ";
    cout << endl;
    show.close();
    return 0;
}
