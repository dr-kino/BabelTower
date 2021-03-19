//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void decToBinary(int n) {
    int binaryNum[32];
    int i = 0, nOnes = 0, nOnesTemp = 0;
    bool isOne = false;

    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
        if (binaryNum[j] == 1) {
            isOne = true;
        }
        else {
            isOne = false;
        }

        if (isOne == true) {
            nOnesTemp++;
            if (j == 0) {
                if (nOnesTemp > nOnes) {
                    nOnes = nOnesTemp;
                    nOnesTemp = 0;
                }
            }
        }
        else {
            if (nOnesTemp > nOnes) {
                nOnes = nOnesTemp;
            }
            nOnesTemp = 0;
        }
    }

    cout << "\n" << nOnes << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if ((n >= 1) && (n <= 1000000)) {
        decToBinary(n);
    }

    return 0;
}
