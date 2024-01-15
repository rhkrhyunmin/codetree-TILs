#include <iostream>
#include <map>
#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> treemap;

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

        if (command == "add") {
            int k, v;
            cin >> k >> v;
            treemap[k] = v;
        } else if (command == "remove") {
            int k;
            cin >> k;
            treemap.erase(k);
        } else if (command == "find") {
            int k;
            cin >> k;
            auto it = treemap.find(k);
            if (it != treemap.end()) {
                cout << it->second << endl;
            } else {
                cout << "None" << endl;
            }
        } else if (command == "print_list") {
            if (treemap.empty()) {
                cout << "None" << endl;
            } else {
                for (const auto& entry : treemap) {
                    cout << entry.second << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}