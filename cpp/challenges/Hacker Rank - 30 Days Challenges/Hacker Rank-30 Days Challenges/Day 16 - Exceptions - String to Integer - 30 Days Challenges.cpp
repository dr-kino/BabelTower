#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class ConvertString {
public:
    void ToInteger(string s);
};

void ConvertString::ToInteger(string s) {
    int intValue;

    try {
        intValue = stoi(s);
    }
    catch (const std::invalid_argument& ia) {
        //std::cerr << "Invalid argument: " << ia.what() << '\n';
        cout << "Bad String" << endl;
        return;
    }
    
    cout << intValue << endl;
}

int main() {
    string S;
    ConvertString conv;

    cin >> S;
    conv.ToInteger(S);

    return 0;
}