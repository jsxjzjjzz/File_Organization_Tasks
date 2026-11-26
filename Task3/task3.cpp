// Task 3 - Section 3
// يكتب Hello Everybody في welcome.txt
// وبعدين يبدل body بـ one فتبقى Hello Everyone

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream out("welcome.txt");
    out << "Hello Everybody";
    out.close();

    ifstream in("welcome.txt");
    string s;
    getline(in, s);
    in.close();

    s.replace(s.find("body"), 4, "one");

    ofstream out2("welcome.txt");
    out2 << s;
    out2.close();

    ifstream show("welcome.txt");
    getline(show, s);
    show.close();
    cout << s << endl;
    return 0;
}
