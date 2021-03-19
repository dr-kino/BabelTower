#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    string input_string;

    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
 
    if ((N >= 1) && (N<=10)) {
        while (N != 0) {
            getline(cin, input_string);
            if ((input_string.size() >= 2) && (input_string.size() <= 10000)) {
                for (int i = 0; i < input_string.size(); i++) {
                    if ((i % 2) == 0) {
                        cout << input_string[i];
                    }
                }

                cout << " ";

                for (int i = 0; i < input_string.size(); i++) {
                    if ((i % 2) == 1) {
                        cout << input_string[i];
                    }
                }
                cout << endl;
                --N;
            }
            else {
                break;
            }
        }
    }

    return 0;
}
