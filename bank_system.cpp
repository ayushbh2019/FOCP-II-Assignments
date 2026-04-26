#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> bank;
    int Q;
    cin >> Q;

    while (Q--) {
        string op;
        cin >> op;

        if (op == "CREATE") {
            string x;
            int y;
            cin >> x >> y;

            if (bank.find(x) == bank.end()) {
                bank[x] = y;
                cout << "true\n";
            } else {
                bank[x] += y;
                cout << "false\n";
            }
        }

        else if (op == "DEBIT") {
            string x;
            int y;
            cin >> x >> y;

            if (bank.find(x) != bank.end() && bank[x] >= y) {
                bank[x] -= y;
                cout << "true\n";
            } else {
                cout << "false\n";
            }
        }

        else if (op == "CREDIT") {
            string x;
            int y;
            cin >> x >> y;

            if (bank.find(x) != bank.end()) {
                bank[x] += y;
                cout << "true\n";
            } else {
                cout << "false\n";
            }
        }

        else if (op == "BALANCE") {
            string x;
            cin >> x;

            if (bank.find(x) != bank.end()) {
                cout << bank[x] << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }
}