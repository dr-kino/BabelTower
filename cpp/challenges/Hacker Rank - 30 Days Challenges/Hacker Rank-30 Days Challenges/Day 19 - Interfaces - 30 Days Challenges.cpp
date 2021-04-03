#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic {
public:
    virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        int sum = 0;

        for (int x = 1; x <= n; x++) {
            if ((n % x) == 0) {
                sum += x;
                //cout << x << endl;        
            }
        }
        return sum;
    }
};

int main() {
    int n;
    cin >> n;
    AdvancedArithmetic* myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}