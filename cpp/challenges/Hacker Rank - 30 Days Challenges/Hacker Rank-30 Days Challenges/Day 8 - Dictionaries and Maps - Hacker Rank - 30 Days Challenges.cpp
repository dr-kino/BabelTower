#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    std::map<string, string> phoneBook;
    int nEntries;
    string name, phone;
    vector<string> queries;

    cin >> nEntries;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if ((nEntries >= 1) && (nEntries <= 100000)) {
        for (int i = 0; i < nEntries; i++) {
            cin >> name >> phone;
            if (phone.size() == 8) {
                phoneBook.insert(pair<string, string>(name, phone));
            }
            else {
                cout << "Invalid Phone Number" << endl;
            }
        }

        while (cin >> name) {
            if (phoneBook.find(name) == phoneBook.end()) {
                cout << "Not found" << endl;
            }
            else {
                cout << name << "=" << phoneBook.at(name) << endl;
            }
        }
    }

    return 0;
}