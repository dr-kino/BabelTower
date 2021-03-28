#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    int power(int n, int p);
};

int Calculator::power(int n, int p) {
    int result = 0;

    if ((n >= 0) && (p >= 0)) {
        result = pow(n, p);
    }
    else {
        throw std::invalid_argument("n and p should be non-negative");
    }

    return result;
}

int main()
{
    Calculator myCalculator = Calculator();
    int T, n, p;
    cin >> T;
    while (T-- > 0) {
        if (scanf("%d %d", &n, &p) == 2) {
            try {
                int ans = myCalculator.power(n, p);
                cout << ans << endl;
            }
            catch (exception& e) {
                cout << e.what() << endl;
            }
        }
    }

}