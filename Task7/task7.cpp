// Task 7 - Section 7
// يرتب أسماء الطلبة من names.txt تصاعدي ويطبعهم

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    ifstream input("names.txt");
    vector<string> data;
    string line;
    while (getline(input, line))
        data.push_back(line);
    input.close();
    sort(data.begin(), data.end());
    cout << "Names sorted Successfully" << endl;
    for (int i = 0; i < (int)data.size(); i++)
        cout << data[i] << endl;
    return 0;
}
