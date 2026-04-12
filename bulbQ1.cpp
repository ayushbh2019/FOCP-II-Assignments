#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string bulbs;
    cin >> bulbs;

    for (int l = 1; l <= n; l++) {
        int operations = 0;
        int i = 0;

        while (i < n) {
            if (bulbs[i] == '1') {
                operations++;
                i = i + l;
            } else {
                i++;
            }
        }

        if (operations <= k) {
            cout << l << endl;
            break;
        }
    }

    return 0;
}