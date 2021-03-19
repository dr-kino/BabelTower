#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int var_i = 0;
    double var_d = 0.0;
    string var_s, tmp;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> var_i;
    cin >> var_d;
    getline(cin >> var_s, tmp);

    var_s.append(tmp);

    // Print the sum of both integer variables on a new line.
    cout << i + var_i << endl;

    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + var_d);

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + var_s << endl;

    return 0;
}