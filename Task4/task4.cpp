// Task 4 (Lab 1) - Section 4
// 1- المستخدم يدخل عدد أشخاص وبياناتهم (اسم، سن) وتتحفظ في ملف
// 2- يقرا الملف في vector<berson> ويجيب الأصغر والأكبر سنًا ويحفظهم في ملف نتايج

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
struct Person { string name; int age; };
int main() {
    int n;
    cout << "How many persons? ";
    cin >> n;
    ofstream f("persons.txt");
    for (int i = 0; i < n; i++) {
        Person p;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, p.name);
        cout << "Enter age: ";
        cin >> p.age;
        f << p.name << endl << p.age << endl;
    }
    f.close();

    vector<Person> v;
    ifstream in("persons.txt");
    Person p;
    while (getline(in, p.name) && (in >> p.age)) {
        in.ignore();
        v.push_back(p);
    }
    in.close();

    Person younger = v[0], older = v[0];
    for (int i = 1; i < (int)v.size(); i++) {
        if (v[i].age < younger.age) younger = v[i];
        if (v[i].age > older.age) older = v[i];
    }
    ofstream r("results.txt");
    r << "Younger: " << younger.name << " (" << younger.age << ")" << endl;
    r << "Older: " << older.name << " (" << older.age << ")" << endl;
    r.close();
    cout << "Results saved to results.txt" << endl;
    return 0;
}
