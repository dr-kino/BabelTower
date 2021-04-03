#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++) {
        cin >> a[a_i];
    }

    int numberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j+1]);
                numberOfSwaps++;
                cout << "round " << i << "  a: ";
                for (int k =0; k != n; k++)
                    cout << a[k] << " ";
                cout << "swaps this round: " << a[j + 1] << endl;
            }
        }

        if (numberOfSwaps == 0) {
            break;
        }
    }

    cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
    cout << "First Element: " << a.at(0) << endl;
    cout << "Last Element: " << a.at(n - 1) << endl;

    return 0;
}