#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    unordered_map<string, vector<string>> movies;
    int Q;
    cin >> Q;

    while (Q--) {
        string op;
        cin >> op;

        if (op == "BOOK") {
            string x, y;
            cin >> x >> y;

            if (find(movies[y].begin(), movies[y].end(), x) != movies[y].end() 
                || movies[y].size() >= 100) {
                cout << "false\n";
            } else {
                movies[y].push_back(x);
                cout << "true\n";
            }
        }

        else if (op == "CANCEL") {
            string x, y;
            cin >> x >> y;

            if (find(movies[y].begin(), movies[y].end(), x) != movies[y].end()) {
                movies[y].erase(find(movies[y].begin(), movies[y].end(), x));
                cout << "true\n";
            } else {
                cout << "false\n";
            }
        }

        else if (op == "IS_BOOKED") {
            string x, y;
            cin >> x >> y;

            if (find(movies[y].begin(), movies[y].end(), x) != movies[y].end()) {
                cout << "true\n";
            } else {
                cout << "false\n";
            }
        }

        else if (op == "AVAILABLE_TICKETS") {
            string y;
            cin >> y;

            cout << 100 - movies[y].size() << "\n";
        }
    }
}