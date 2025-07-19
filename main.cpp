#include <iostream>
#include <vector>
using namespace std;

vector<string> data;

void add_item(const string& item) {
    data.push_back(item);
}

void list_items() {
    for (const auto& item : data) {
        cout << item << endl;
    }
}

int main() {
    int choice;
    string item;
    while (true) {
        cout << "1. Add Item\n2. List Items\n3. Exit\n";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter item: ";
            cin >> item;
            add_item(item);
        } else if (choice == 2) {
            list_items();
        } else {
            break;
        }
    }
    return 0;
}
