// Task 2 - Section 2
// يقرا قايمة الفواكه من fruit.txt ويطبعها
// وبعدين يضيف Fresh Fruits في آخر نفس الملف

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream in("fruit.txt");
    string line;
    while (getline(in, line))
        cout << line << endl;
    in.close();
    ofstream out("fruit.txt", ios::app);
    out << "Fresh Fruits" << endl;
    out.close();
    cout << "Done. Fresh Fruits added." << endl;
    return 0;
}
